#include "stdafx.h"
#ifndef _Node_H
#define _Node_H

template<class T>
class Node{
private: 
	T value;
	Node<T>* nextPtr;
public:
	Node(const T &value):value(value)nextPtr(nullptr){};
	~Node(){};
	void setValue(const T &val){ value = val; }
	void setNextPtr(const Node<T>* ptr){ nextPtr = ptr; }
	T getValue()const{return &value};
	Node<T>* getNextPtr()const { return nextPtr; }
};

#endif