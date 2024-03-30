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
	if (top == nullptr)
	{
		return -1;
	}
	else
	{
		const int tempVal = top->data;  
		Node* oldtop = top; 
		top = top->next;  
		oldtop->next = nullptr; 
		delete oldtop; 
		return tempVal;  
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
