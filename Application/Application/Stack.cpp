#include "Stack.h"
#include <iostream>

struct Stack * createStack(unsigned int capacity)
{
	struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
	stack->capacity = capacity;
	stack->top = -1;
	stack->array = (int*)malloc(stack->capacity * sizeof(int));
	return stack;
}

bool Stack_isFull(Stack * stack)
{
	return (stack->top == stack->capacity - 1);
}

bool Stack_isEmpty(Stack * stack)
{
	return (stack->top == -1);
}

void Stack_push(Stack * stack, int data)
{
	if (Stack_isFull(stack))
		return;

	if (Stack_isEmpty(stack))
		stack->front = data;
	stack->array[++stack->top] = data;
}

int Stack_pop(Stack * stack)
{
	if (Stack_isEmpty(stack))
		return INT_MIN;
	return stack->array[stack->top--];
}

int Stack_peek(struct Stack* stack) {
	if (Stack_isEmpty(stack))
		return INT_MIN;
	return stack->array[stack->top];
}

void Stack_Front(struct Stack* stack) {
	std::cout << stack->front << std::endl;
}
