#include "Producer.h"
#include <iostream>
#include <windows.h>

void Producer::produce(size_t num_items)
{
	if (!pool) return;
	if (num_items <= 0) return;
	this->num_items = num_items;
	start();
}

void Producer::run()
{
	if (!pool) return;
	for (size_t i = 0; i < num_items; ++i)
	{
		pool->push(id);
		Sleep(1000);
	}
}
