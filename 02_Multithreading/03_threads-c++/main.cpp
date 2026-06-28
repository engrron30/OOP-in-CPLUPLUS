#include <iostream>
#include <thread>
using namespace std;

#define NUM_THREADS		3

void worker() {
	cout << "THREAD " << this_thread::get_id() << endl;
}

int main()
{
	thread threads[NUM_THREADS];
	for (int i = 0; i < NUM_THREADS; i++) {
		threads[i] = thread(worker);
	}

	for (int i = 0; i < NUM_THREADS; i++) {
		threads[i].join();
	}

	cout << "All threads are finished!" << endl;
	return 0;
}
