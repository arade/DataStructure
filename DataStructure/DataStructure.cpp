// DataStructure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <string>
#include <memory>
#include <list>
#include <algorithm>
#include "LinkedList.h"
#include "Node.h"
#include "Stack.h"
using namespace std;

void fn(int i){ cout << i << endl; };

int _tmain(int argc, _TCHAR* argv[])
{

	auto head = shared_ptr<Node<string>>(new Node<string>("arade"));
	auto seconde = shared_ptr<Node<string>>(new Node<string>("tariku"));
	auto third = shared_ptr<Node<string>>(new Node<string>("tegen"));
	auto stack = Stack<string>();
	stack.push(head.get());
	stack.push(seconde.get());
	stack.push(third.get());
	

	cout << stack.peek()->getValue() << endl;
	cout << stack.pop()->getValue() << endl;
	cout << stack.pop()->getValue() << endl;
	cout << stack.pop()->getValue() << endl;
	cout << stack.peek()->getValue() << endl;
	/*
	list<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	for_each(numbers.begin(), numbers.end(), fn);*/
	return 0;

}


