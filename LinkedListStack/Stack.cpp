#include "Stack.h"

void Stack::Push(int val)
{
	Node* temp = new Node(val);
	temp->data = val;
	temp->next = top;
	top = temp;
}

int Stack::Pop()
{
	Node* temp;
	if (top == nullptr)
	{
		return -1;
	}
	else
	{
		int popped_val = top->data;
		Node* temp = top;
		top = top->next; 
		delete temp; 
		return popped_val; 
	}
}

int Stack::Size() const
{
	int size = 0;
	Node* current = top; 
	while (current != nullptr)
	{
		size++; 
		current = current->next; 
	}
	return size;
}

bool Stack::Empty() const
{
	return top == nullptr;
}
