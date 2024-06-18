#include <stdio.h>
#include <stdlib.h>
#include "CircularQueueHeader.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    CircularQueue q;
    q.front = 0;
    q.rear = 0;

	enqueue(&q, 8);
	enqueue(&q, 3);
	enqueue(&q, 5);
	display(&q);
	dequeue(&q);
	display(&q);
	front(&q);
	rear(&q);
	
	return 0;
}
