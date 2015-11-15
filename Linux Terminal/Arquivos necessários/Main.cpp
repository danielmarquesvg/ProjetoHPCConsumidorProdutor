#include "Pool.h"
#include "Producer.h"
#include "Consumer.h"
#include <string>

using namespace std;

int main(void)
{
	Pool<string> pool;
	Producer prod1(&pool, "Producer 1");
	Producer prod2(&pool, "Producer 2");
	Producer prod3(&pool, "Producer 3");
	Consumer cons1(&pool, "Consumer 1");
	Consumer cons2(&pool, "Consumer 2");
	Consumer cons3(&pool, "Consumer 3");

	cons1.consume(50);
	cons2.consume(50);
	cons3.consume(50);

	prod1.produce(50);
	prod2.produce(50);
	prod3.produce(50);	

	prod1.join();
	prod2.join();
	prod3.join();
	cons1.join();
	cons2.join();
	cons3.join();
	
	return 0;
}

