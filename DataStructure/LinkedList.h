#include "stdafx.h"
#include "NodeSingleLL.h"
#ifndef _LinkedList_H
#define _LinkedList_H

template <class T>
class LinkedList{
private:
	NodeSingleLL<T>* head;
	NodeSingleLL<T>*  tail;

public:
	//constructor
	LinkedList() : head(nullptr), tail(nullptr){};
	
	//add a node at the head of linked list
	void addFirst(NodeSingleLL<T>* newPtr)
	{
		if (head)
		{
			newPtr->setNextPtr(head);
			head = newPtr;
		}
		else
		{
			head = newPtr;
			tail = newPtr;
		}
	};

	//add a node at the tail of linked list
	void addLast(NodeSingleLL<T>* newPtr)
	{
		if (head)
		{
			tail->setNextPtr(newPtr);
			tail = newPtr;
		}
		else
		{
			head = newPtr;
			tail = newPtr;
		}
	};

	
	//remove the head of the linked list
	void removeFirst()
	{
		if (head==tail)
		{
			head = nullptr;
			tail = nullptr;
		}
		else
		{
			head = head->getNextPtr();
		}
	};

	//remove the tail of the linked list
	void removeLast()
	{
		if (head == tail)
		{
			head = nullptr;
			tail = nullptr;
		}
		else
		{
			NodeSingleLL<T>*  temp = head;
			while (temp->getNextPtr())
			{
				temp = temp->getNextPtr();
			}
			temp->setNextPtr(nullptr);
			tail = temp;
		}
	};

	//Remove a node with a given value
	void removeItem(const T &value)
	{
		NodeSingleLL<T>*  priv = head;
		NodeSingleLL<T>*  curr = head;
		while (curr && (curr->getValue() != value) )
		{

			priv = curr;
			curr = curr->getNextPtr();
		}

		if (curr)
		{
			if (priv == curr)
			{
				head = curr->getNextPtr();
			}
			else if (!curr->getNextPtr())
			{
				priv->setNextPtr(nullptr);
				tail = priv;
			}
			else 
			{
				priv->setNextPtr(curr->getNextPtr());
			}
		}

	};

	//search for a node in a linked list
	bool find(const T &value)
	{
		NodeSingleLL<T>*  temp = head;
		while (temp && (temp->getValue() != value))
		{
			temp = temp->getNextPtr();
		}
		return temp != nullptr;
	};

	NodeSingleLL<T>* iterator()const
	{
		static NodeSingleLL<T>* ptr = head;
		NodeSingleLL<T>* tmp = ptr;
		if (ptr)
			ptr = ptr->getNextPtr();
		return tmp;
	};

};



#endif