#include "stdafx.h"
#include "NodeDoubleLL.h"

#ifndef _DLinkedList_H
#define _DLinkedList_H


template <class T>
class DLinkedList{
private: 
	NodeDoubleLL<T>* head;
	NodeDoubleLL<T>* tail;
public:
	DLinkedList() :head(nullptr), tail(nullptr){};
	
	//node is added at the head of doublly linked list
	void addFirst(NodeDoubleLL<T>* ptr)
	{
		if (head)
		{
			
			ptr->setNextPtr(head);
			head->setPrvPtr(ptr);
			head = ptr;
		}
		else
		{
			head = ptr;
			tail = ptr;
		}
	};

	//node is added at the tail of doublly linked list
	void addLast(NodeDoubleLL<T>* ptr)
	{
		if (head)
		{
			tail->setNextPtr(ptr);
			ptr->setPrvPtr(tail);
			tail = ptr;
		}
		else
		{
			head = ptr;
			tail = ptr;
		}
	};

	//node is removed from the head of doublly linked list
	void removeFirst()
	{
		if (head == tail)
		{
			tail = nullptr;
			head = nullptr;
		}
		else
		{
			head = (NodeDoubleLL<T>*)head->getNextPtr();
			head->setPrvPtr(nullptr);
		}
	};

	//node is removed from the tail of doublly linked list
	void removeLast()
	{
		if (head == tail)
		{
			tail = nullptr;
			head = nullptr;
		}
		else
		{
			tail = tail->getPrvPtr();
			tail->setNextPtr(nullptr);
		}
	};

	//This function is used to iterate through the list

	NodeDoubleLL<T>* iteratorForward(void)
	{
		static NodeDoubleLL<T>* currentPtr = head;
		NodeDoubleLL<T>* temp = currentPtr;
		if (currentPtr)
			currentPtr = (NodeDoubleLL<T>*)currentPtr->getNextPtr();
		else
			currentPtr = head;
		return temp;			
	};

	
	NodeDoubleLL<T>* iteratorForward(NodeDoubleLL<T>* startingPtr)
	{
		static NodeDoubleLL<T>* currentPtr = startingPtr;
		NodeDoubleLL<T>* temp = currentPtr;
		if (currentPtr)
			currentPtr = (NodeDoubleLL<T>*)currentPtr->getNextPtr();
		else
			currentPtr = head;
		return temp;
	};
	
	NodeDoubleLL<T>* iteratorBackward(void)
	{
		static NodeDoubleLL<T>* currentPtr = tail;
		NodeDoubleLL<T>* temp = currentPtr;
		if (currentPtr)
			currentPtr = (NodeDoubleLL<T>*)currentPtr->getPrvPtr();
		else
			currentPtr = tail;
		return temp;
	};


	NodeDoubleLL<T>* iteratorBackward(NodeDoubleLL<T>* startingPtr)
	{
		static NodeDoubleLL<T>* currentPtr = startingPtr;
		NodeDoubleLL<T>* temp = currentPtr;
		if (currentPtr)
			currentPtr = (NodeDoubleLL<T>*)currentPtr->getPrvPtr();
		else
			currentPtr = tail;
		return temp;
	};

	bool find(const T &value)const 
	{
		NodeDoubleLL<T>* temp;
		while ((temp = iteratorForward()) && (temp->getValue() != value)){ ; }
		return  	(bool)temp;
	};

};


#endif