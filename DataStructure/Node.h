#include "stdafx.h"
#include <iostream>
#ifndef _Node_H
#define _Node_H

template<class T>
class Node{
private: 
	T value;
	Node<T>* nextPtr;
public:
	Node<T>(const T val):value(val),nextPtr(nullptr){};
	virtual  ~Node<T>() { std::cout << "deleted" << std::endl; };
	void setValue(T const &val){ value = val; }
	void setNextPtr(Node<T>* const ptr) { nextPtr = ptr; }
	T getValue()  const { return value; };
	Node<T>* getNextPtr() const { return nextPtr; }
};

#endif