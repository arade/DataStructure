// DataStructure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <string>
#include "Node.h"
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{

	Node<string>* head = new Node<string>("arade");
	Node<string>* seconde = new Node<string>("tariku");
	Node<string>* nodePtr=head;
	head->setNextPtr(seconde);

	while (nodePtr){
		cout << nodePtr->getValue()<<endl;

		nodePtr = nodePtr->getNextPtr();
	}
	
	return 0;
}

