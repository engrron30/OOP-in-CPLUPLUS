#include <stdio.h>
#include <pthread.h>

#define NUM_THREADS		3

void *worker(void *args) {
	pthread_t thread_id = pthread_self();
	printf("[%llu] THREAD Triggered\n", (unsigned long long) thread_id);
	return NULL;
}

int main()
{
	pthread_t threads[NUM_THREADS];
	for (int i = 0; i < NUM_THREADS; i++) {
		pthread_create(&threads[i], NULL, worker, NULL);
	}

	for (int i = 0; i < NUM_THREADS; i++) {
		pthread_join(threads[i], NULL);
	}

	printf("All threads are finished!\n");
	return 0;
}
