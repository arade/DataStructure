#include "stdafx.h"
#include <iostream>
#ifndef _NodeSingleLL_H
#define _NodeSingleLL_H

template<class T>
class NodeSingleLL{
private: 
	T value;
	NodeSingleLL<T>* nextPtr;
public:
	NodeSingleLL<T>(const T val) : value(val), nextPtr(nullptr){};
	virtual  ~NodeSingleLL<T>() { };
	void setValue(T const &val){ value = val; };
	void setNextPtr(NodeSingleLL<T>* const ptr) { nextPtr = ptr; };
	T getValue()  const { return value; };
	NodeSingleLL<T>* getNextPtr() const { return nextPtr; };
};
#endif