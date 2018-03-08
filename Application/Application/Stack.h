#pragma once

struct Stack {
	int top;
	unsigned int capacity;
	int* array;
	int front;
};

struct Stack* createStack(unsigned int capacity);

bool Stack_isFull(struct Stack* stack);

bool Stack_isEmpty(struct Stack* stack);

void Stack_push(struct Stack* stack, int data);

int Stack_pop(struct Stack* stack);

int Stack_peek(struct Stack* stack);

void Stack_Front(struct Stack* stack);