#pragma once

//INITIALIZE THE QUEUE CLASS
struct Queue {
	int front, rear, SIZE;
	unsigned int capacity;
	int* array;
};
//CREATING THE QUEUE
struct Queue* createQueue(unsigned int capacity);

//CHECKING IF THE QUEUE IS FULL OR NOT
 bool Queue_isFull(struct Queue* queue);

//CHECKING IF THE QUEUE IS EMPTY OR NOT
 bool Queue_isEmpty(struct Queue* queue);


//EN=QUEUE OPERATION
 void Queue_Enqueue(struct Queue* queue, int item);


//D-QUEUE OPERATION
 int Queue_DeQueue(struct Queue* queue);

//GETTING THE FRONT VALUE FROM THE QUEUE
 int Queue_Front(struct Queue* queue);


//GETTING THE REAR VALUE FROM THE QUEUE
 int Queue_Rear(struct Queue* queue);