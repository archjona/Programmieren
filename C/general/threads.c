#include <stdio.h>
#include <pthread.h>

void *computation(void* arg); // der void pointer der auf value1 zeigt wird reingeladen


int main() {

  pthread_t thread1;

  long value1 = 1;

  pthread_create(&thread1, NULL, computation, (void*) &value1); //pthread_create will immer einen void pointer

  pthread_join(thread1, NULL);

  return 0;
}

void *computation(void* arg) {

  long* add_Num = (long*) arg; // durch (long*) wird der void pointer in einen long* pointer gecastet in add_Num

  printf("Add: %ld\n", *add_Num);


  return NULL;
}
