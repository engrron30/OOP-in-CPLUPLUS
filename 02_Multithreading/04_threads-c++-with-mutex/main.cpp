#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

#define NUM_THREADS		100

static int num = 0;
mutex num_mutex;

void worker() {
    num_mutex.lock();
    num++;
	cout << "THREAD " << this_thread::get_id() << " (num=" << num << ")" << endl;
    num_mutex.unlock();
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
