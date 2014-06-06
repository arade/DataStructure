#include "stdafx.h"
#ifndef _NodeTree_H
#define _NodeTree_H

template <class T>
class NodeTree{
private: 
	T value;
	NodeTree<T>* parent;
	NodeTree<T>* leftChild;
	NodeTree<T>* rightChild;
public:
	NodeTree(const T &val) :value(val), parent(nullptr), leftChild(nullptr), rightChild(nullptr){};
	void setParent(NodeTree<T>* ptr){ parent = ptr; };
	virtual ~NodeTree(void){ cout << "delete: " << value << endl; };
	void setLeftChild( NodeTree<T>* ptr){ leftChild = ptr; };
	void setRightChild(NodeTree<T>* ptr){ rightChild = ptr; };
	NodeTree<T>* getParent(void) const { return parent; };
	NodeTree<T>* getLeftChild(void) const { return leftChild; };
	NodeTree<T>* getRightChild(void) const { return rightChild; };
	T getValue(void) const { return value; };
};

#endif