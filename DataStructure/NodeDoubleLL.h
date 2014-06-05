#include "stdafx.h"
#include "NodeSingleLL.h"

#ifndef _NodeDoubleLL_H
#define _NodeDoubleLL_H

template<class T>
class NodeDoubleLL : public NodeSingleLL<T>{
private:
	NodeDoubleLL<T>* prvPtr;
public:
	NodeDoubleLL<T>(const T &val) : NodeSingleLL(val), prvPtr(nullptr){};
	void setPrvPtr(NodeDoubleLL<T>* Ptr){ prvPtr = Ptr; };
	NodeDoubleLL<T>* getPrvPtr()const{ return prvPtr; };
};
#endif