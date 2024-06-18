#ifndef CircularQueueHeader
#define CircularQueueHeader
#define MAX 10
#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int data[MAX];
	int front, rear;
}CircularQueue;

void enqueue();
void dequeue();
void front();
void rear();
void display();


#endif
