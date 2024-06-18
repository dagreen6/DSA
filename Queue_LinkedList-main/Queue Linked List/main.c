#include <stdio.h>
#include <stdlib.h>
#include "MyQueue.h"


int main() {
	Queue Q;
 	initQueue(&Q);
enqueue(&Q, 54);
enqueue(&Q, 34);
enqueue(&Q, 32);
enqueue(&Q, 12);
enqueue(&Q, 87);
enqueue(&Q, 90);
display(Q);
dequeue(&Q);
dequeue(&Q);
display(Q);
front(Q);
rear(Q);
isEmpty(Q); 
display(Q);
enqueue(&Q, 2);
enqueue(&Q, 1);
display(Q);
 
	return 0;
}

