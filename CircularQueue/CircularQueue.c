#include "CircularQueueHeader.h" 
#include <stdio.h>
#include <stdlib.h>
void enqueue(CircularQueue *q, int item) {
    if ((q->rear + 1) % MAX == q->front) {
        printf("Queue is full. Cannot enqueue.\n");
    } else {
        q->rear = (q->rear + 1) % MAX;
        q->data[q->rear] = item;
        printf("%d enqueued to the queue.\n", item);
    }
}

void dequeue(CircularQueue *q) {
    if (q->front == q->rear) {
        printf("Queue is empty. Cannot dequeue.\n");
    } else {
        q->front = (q->front + 1) % MAX;
        printf("%d dequeued from the queue.\n", q->data[q->front]);
    }
}

void front(CircularQueue *q) {
    if (q->front == q->rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Front element: %d\n", q->data[(q->front + 1) % MAX]);
    }
}

void rear(CircularQueue *q) {
    if (q->front == q->rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Rear element: %d\n", q->data[q->rear]);
    }
}

void display(CircularQueue *q) {
    if (q->front == q->rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        int i = (q->front + 1) % MAX;
        for (; i != (q->rear + 1) % MAX; i = (i + 1) % MAX) {
            printf("%d ", q->data[i]);
        }
        printf("\n");
    }
}



