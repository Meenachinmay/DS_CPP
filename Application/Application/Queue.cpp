#include <iostream>
#include "Queue.h"

//CREATING THE QUEUE
struct Queue* createQueue(unsigned int capacity) {
	struct Queue* queue = (struct Queue*) malloc(sizeof(struct Queue));
	queue->capacity = capacity;
	queue->front = 0;
	queue->SIZE = 0;
	queue->rear = capacity - 1;
	queue->array = (int*)malloc(queue->capacity * sizeof(int));
	return queue;
}

//CHECKING IF THE QUEUE IS FULL OR NOT
 bool Queue_isFull(struct Queue* queue) {
	return (queue->SIZE == queue->capacity);
}

//CHECKING IF THE QUEUE IS EMPTY OR NOT
 bool Queue_isEmpty(struct Queue* queue) {
	return (queue->SIZE == 0);
}

//EN=QUEUE OPERATION
 void Queue_Enqueue(struct Queue* queue, int item) {
	if (Queue_isFull(queue))
		return;

	queue->rear = (queue->rear + 1) % queue->capacity;
	queue->array[queue->rear] = item;
	queue->SIZE = queue->SIZE + 1;

}

//D-QUEUE OPERATION
 int Queue_DeQueue(struct Queue* queue) {
	if (Queue_isEmpty(queue)) {
		return INT_MIN;
	}

	int item = queue->array[queue->front];
	queue->front = (queue->front + 1) % queue->capacity;
	queue->SIZE = queue->SIZE - 1;
	return item;
}

//GETTING THE FRONT VALUE FROM THE QUEUE
 int Queue_Front(struct Queue* queue) {
	if (Queue_isEmpty(queue))
		return INT_MIN;
	return queue->array[queue->front];
}

//GETTING THE REAR VALUE FROM THE QUEUE
 int Queue_Rear(struct Queue* queue) {
	if (Queue_isEmpty(queue))
		return INT_MIN;
	return queue->array[queue->rear];
}