/*
 Ben Kupernik
 Linkedlist.h
 Header File

 This is the declaration file for a template linked list data structure. It contains a constructor, copy constructor, destructor, assignment operator, standard add
 and remove functions and read/write file functions.
 */

 /*****************************************************************************************************************************************/

#ifndef Linkedlist_H
#define LInkedlist_H
#include <algorithm>//for the swap function
#include <time.h>
#include "Node.h"
#include "question.h"
#include "MyHTML.h"

template <class TheType>
class LinkedList
{
public:
	//constructors and destructors
	LinkedList();//constructor
	LinkedList(const LinkedList& source);//copy constructor
	~LinkedList();//destructor

	//accessors
	TheType getByIndex(int index);
	TheType getRandomItem();//returns the data stored in a random node
	void print();//prints all the data in the linked list
	int getCount();//counts the items in the linked list
	bool isEmpty(); //returns true if the list is empty false if not



	//modifiers
	void addToBegining(TheType dataIn);//adds a node to the beginning
	void addToEnd(TheType dataIn);//adds a node to the end
	void removeItem(TheType dataIn);//removes a node and frees the associated memory
	void removeBegining();//removes the first node and frees the associated memory
	void removeAll();//frees the memory of the LinkedList
	bool ReadFile(std::string fileName);//reads from a file if ADT is used it must have an override for ifstream
	bool writeFile(std::string fileName);//writes to a file if ADT is used it must have an override for ofstream


	//overloads
	LinkedList& operator=(const LinkedList& rhs);//assignment operator

	//other
	void printHTMLPages(int catNum);

private:
	Node<TheType>* head;
	Node<TheType>* tail;
	Node<TheType>* findByItemPrevious(const TheType& dataIn);//helper function for remove item returns a pointer to the node before the serched node
	Node<TheType>* findByItem(const TheType& dataIn);//finds an item based on the data in the node and retuns a pointer to that node
};
#include "Linkedlist.template"
#endif

