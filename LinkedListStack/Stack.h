#pragma once

class Node
{
public:
	Node(int val)
        :
        data(val),
        next(nullptr)
	{
	}
    Node(const Node& source)
        :
        data(source.data),
        next(nullptr)
    {
        if (source.next != nullptr)
        {
            next = new Node(*source.next);
        }
    }
    ~Node()
    {
            delete next;
            next = nullptr;
    }
public:
	int data;
	Node* next;
};

class Stack
{
	Node* top;
public:
	Stack()
	{
		top = nullptr;
	}

    // Copy assignment operator
    Stack& operator=(const Stack& source)
    {
        if (!Empty())
        {
            delete top;
            top = nullptr;
        }
        if (!source.Empty())
        {
            top = new Node(*source.top);
        }
        return *this;
    }

    //Copy constructor
    Stack(const Stack& source)
    {
        *this = source;
    }

    ~Stack()
    {
        delete top;
        top = nullptr;
    }
public:
	void Push( int val );
	int Pop();
	int Size() const;
	bool Empty() const;
};