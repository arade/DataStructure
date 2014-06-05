#include "stdafx.h"
#include "NodeSingleLL.h"
#ifndef _Stack_H
#define _Stack_H
template <class T>
class Stack{
private :
	NodeSingleLL<T>* topPtr;
	
public:
	Stack(): topPtr(nullptr) {};

	void push(NodeSingleLL<T>* value)
	{
		value->setNextPtr(topPtr);
		topPtr = value;
	};
	NodeSingleLL<T>* pop(void)
	{
		NodeSingleLL<T>* tempPtr = topPtr;
		topPtr = topPtr->getNextPtr();
		return tempPtr;
	};	
	
	NodeSingleLL<T>* peek(void)
	{
		return topPtr;
	};

	bool isEmpty(void) const 
	{ 
		return topPtr == nullptr; 
	}
};
#endif