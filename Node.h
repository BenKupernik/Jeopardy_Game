/*
 Ben Kupernik
 Node.h
 Header File

 This is the declaration file for a template node class intended to be used in a linked list(its friend function). It contains two
 constructors.
 */

/***********************************************************************************************************************************************************/

#ifndef Node_H
#define Node_H
#include <iostream>



template <class TheType>
class Node
{
public:
	Node();//default constructor
	Node(TheType dataIn);//constructor with the type as parameter

private:
	Node* next;
	TheType data;
	template <typename TheType>//needed otherwise the compiler thinks I am redefining the linkedlist class
	friend class LinkedList;

};
#include "Node.template"
#endif
