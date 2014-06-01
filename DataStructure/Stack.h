#include "stdafx.h"
#include "Node.h"
#ifndef _Stack_H
#define _Stack_H
template <class T>
class Stack{
private :
	Node<T>* topPtr;
	
public:
	Stack(): topPtr(nullptr) {};

	void push(Node<T>* value)
	{
		value->setNextPtr(topPtr);
		topPtr = value;
	};
	Node<T>* pop(void) 
	{
		Node<T>* tempPtr = topPtr;
		topPtr = topPtr->getNextPtr();
		return tempPtr;
	};	
	
	Node<T>* peek(void)
	{
		return topPtr;
	};

	bool isEmpty(void) const 
	{ 
		return topPtr == nullptr; 
	}



};



#endif