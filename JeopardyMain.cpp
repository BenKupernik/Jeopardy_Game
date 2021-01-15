/*
Ben Kupernik
JeopardyMain.cpp

This is the main cpp file that runs the program. It will create the html pages that the game is played on.

*/

#include <iostream>		// istream & ostream
#include <string>		// string class

#include "MyHTML.h"
#include "Field.h"		// Field class that inherits from std::string
#include "Question.h"	// Question class
#include  "Linkedlist.h"

int main()
{
	//makes linked lists of all the questions
	LinkedList<Question> list1;
	list1.ReadFile("Geology.csv");
	LinkedList<Question> list2;
	list2.ReadFile("capitals.csv");
	LinkedList<Question> list3;
	list3.ReadFile("cars.csv");
	LinkedList<Question> list4;
	list4.ReadFile("currency.csv");
	LinkedList<Question>list5;
	list5.ReadFile("Music.csv");
	LinkedList<Question> list6;
	list6.ReadFile("shows.csv");

	//makes a list of the categories in the game
	std::string cats[6] = { list1.getByIndex(1).getCategory(), list2.getByIndex(1).getCategory(), list3.getByIndex(1).getCategory(),
		list4.getByIndex(1).getCategory(), list5.getByIndex(1).getCategory(), list6.getByIndex(1).getCategory() };

	//prints all the html pages
	printHTMLIndex(cats);
	list1.printHTMLPages(1);
	list2.printHTMLPages(2);
	list3.printHTMLPages(3);
	list4.printHTMLPages(4);
	list5.printHTMLPages(5);
	list6.printHTMLPages(6);

	return 0;
}







