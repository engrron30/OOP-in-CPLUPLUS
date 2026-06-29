#include <stdio.h>
#include <pthread.h>

#define NUM_THREADS		3
pthread_mutex_t num_mutex;
static int num = 0;

void *worker(void *args) {
	pthread_t thread_id = pthread_self();

    pthread_mutex_lock(&num_mutex);
    num++;
    pthread_mutex_unlock(&num_mutex);

	printf("[%llu] THREAD Triggered (num=%d)\n", (unsigned long long) thread_id, num);
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
