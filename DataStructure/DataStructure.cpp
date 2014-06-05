// DataStructure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <string>
#include <memory>
#include <list>
#include <algorithm>
#include "NodeSingleLL.h"
#include "NodeDoubleLL.h"
#include "LinkedList.h"
#include "DLinkedList.h"
#include "Stack.h"
#include "Queue.h"
#include <stack>
using namespace std;

void fn(int i){ cout << i << endl; };

int _tmain(int argc, _TCHAR* argv[])
{

	auto head = shared_ptr<NodeDoubleLL<string>>(new NodeDoubleLL<string>("arade"));
	auto seconde = shared_ptr<NodeDoubleLL<string>>(new NodeDoubleLL<string>("tariku"));
	auto third = shared_ptr<NodeDoubleLL<string>>(new NodeDoubleLL<string>("tegen"));
	//auto linkedList = LinkedList<string>();
	auto dLinkedList = Queue<string>();
	dLinkedList.enqueue(head.get());
	dLinkedList.enqueue(seconde.get());
	dLinkedList.enqueue(third.get());
	//linkedList.addLast(head.get());
	//linkedList.addLast(seconde.get());
	//linkedList.addLast(third.get());
	//dLinkedList.removeFirst();
	//NodeDoubleLL<string>* ptr;
	//ptr = dLinkedList.iterator();
	
	cout << dLinkedList.dequeue()->getValue()<< endl;
	cout << dLinkedList.dequeue()->getValue() << endl;
	cout << dLinkedList.dequeue()->getValue() << endl;
	/*while (ptr = dLinkedList.iteratorBackward())
	{
		cout << ptr->getValue() << endl;
	}
	cout << dLinkedList.find("arade")<<endl;
	cout << dLinkedList.remove("arade")->getValue();
	cout << dLinkedList.find("arade") << endl;*/

	/*auto stack = Stack<string>();
	stack.push(head.get());
	stack.push(seconde.get());
	stack.push(third.get());
	

	cout << stack.peek()->getValue() << endl;
	cout << stack.pop()->getValue() << endl;
	cout << stack.pop()->getValue() << endl;
	cout << stack.pop()->getValue() << endl;
	if (stack.isEmpty() && cout << stack.peek()->getValue() << endl);
	//cout << stack.peek()->getValue() << endl;*/
	
	/*stack<int> numbers;
	numbers.push(1);
	numbers.push(2);*/
	//for_each(numbers.begin(), numbers.end(), fn);
	//cout << numbers.pop() << endl;
	
	return 0;

}


