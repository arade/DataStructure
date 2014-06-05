#include "stdafx.h"
#include "NodeDoubleLL.h"
#include "DLinkedList.h"
#ifndef _Queue_H
#define _Queue_H

template <class T>
class Queue{
private:
	DLinkedList<T>* queueList;
public:
	Queue() :queueList(new DLinkedList<T>()) {};
	~Queue() { delete queueList; };
	void enqueue(NodeDoubleLL<T>* ptr){
		queueList->addFirst(ptr);
	};
	NodeDoubleLL<T>* dequeue()
	{
		return 	queueList->removeLast();
	};
	
	NodeDoubleLL<T>* peek()
	{
		NodeDoubleLL<T>* answer = queueList->removeLast();
		queueList->addLast(answer);
		return answer;
	};

};


#endif