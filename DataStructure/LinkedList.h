#include "stdafx.h"
#include "Node.h"
#ifndef _LinkedList_H
#define _LinkedList_H

template <class T>
class LinkedList{
private:
	Node<T>* head;
	Node<T>*  tail;
public:
	LinkedList() : head(nullptr), tail(nullptr){};
	void add(Node<T>* newPtr)
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
	Node<T>* find(const T &value)
	{
		Node<T>*  temp = head;
		while (temp && (temp->getValue()!=value) )
		{
			temp = temp->getNextPtr();		
		}
		return temp;
	};
	void remove(const T &value)
	{
		Node<T>*  priv = head;
		Node<T>*  curr = head;
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

};



#endif