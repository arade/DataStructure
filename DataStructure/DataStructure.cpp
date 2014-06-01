// DataStructure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <string>
#include <memory>
#include "LinkedList.h"
#include "Node.h"
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{

	auto head = shared_ptr<Node<string>>(new Node<string>("arade"));
	auto seconde = shared_ptr<Node<string>>(new Node<string>("tariku"));
	auto third = shared_ptr<Node<string>>(new Node<string>("tegen"));
	auto list = LinkedList<string>();
	list.addFirst(head.get());
	list.addFirst(seconde.get());
	list.addFirst(third.get());
	list.removeItem("tegen");
	if (list.find("arade"))
		cout<<list.find("arade")->getValue()<<endl;
	if (list.find("tariku"))
		cout << list.find("tariku")->getValue() << endl;
	if (list.find("tegen"))
		cout << list.find("tegen")->getValue() << endl;
	return 0;
}

