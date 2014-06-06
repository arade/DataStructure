#include "stdafx.h"
#include "NodeTree.h"
#ifndef _BinarySearchTree_H
#define _BinarySearchTree_H

template <class T>
class BinarySearchTree{
private : 
	NodeTree<T>* root;
	int size;
	int maxidth;
	int maxdepth;
	void inorder(NodeTree<T>* node)
	{
		if (node)
		{
			
			inorder(node->getLeftChild());
			cout << node->getValue() << ", ";
			inorder(node->getRightChild());
			
		}
	};
	void preorder(NodeTree<T>* node)
	{
		if (node)
		{
			cout << node->getValue() << ", ";
			preorder(node->getLeftChild());
			preorder(node->getRightChild());
			
		}
	};
	void postorder(NodeTree<T>* node)
	{
		if (node)
		{

			postorder(node->getLeftChild());
			postorder(node->getRightChild());
			cout << node->getValue() << ", ";
		}
	};

	NodeTree<T>* find(NodeTree<T>* node, NodeTree<T>* temproot)
	{
		if (temproot->getValue() > node->getValue())
		{
			if (temproot->getLeftChild())
				return find(node, temproot->getLeftChild());
			else
			 return temproot;
		}
		else 
		{
			if (temproot->getRightChild())
				return find(node, temproot->getRightChild());
			else
				return temproot;
		}
		return nullptr;
	};
public:
	BinarySearchTree() :root(nullptr), size(0), maxidth(0), maxdepth(0){};
	
	void addNode(NodeTree<T>* node)
	{
		
		if (root)
		{
			NodeTree<T>* temp = find(node, root);
			if (temp->getValue() > node->getValue())
			{
				node->setParent(temp);
				temp->setLeftChild(node);
			}
			else
			{
				node->setParent(temp);
				temp->setRightChild(node);
			}
		}
		else
			root = node;
	};


	void traverse(int type)
	{
		switch (type)
		{
		case 1:
			preorder(root);
			break;
		case 2:
			postorder(root);
			break;
		default:
			inorder(root);
		};
	};



};

#endif