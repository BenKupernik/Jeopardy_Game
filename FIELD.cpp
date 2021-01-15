/*
Ben Kupernik
Field.cpp
Header File

Definition file for field class. Filed class inherits from string and add function such as comparing two fields with case
insensitivity and a split function that returns an array. Contains 6 constructors, 2 functions, 2 operational overloads
and one destructor.
*/
#include "FIELD.h"
#include <string>
#include <iostream>

/**********************************************************************************************************************************/
//constructors. The first 6 constructors for std::string (per cpp.com) are added with the fields pointer initialized to nullptr

Field::Field() : std::string()
{
	fields = nullptr;

}

Field::Field(const std::string& str) : std::string(str)
{
	fields = nullptr;

}

Field::Field(const std::string& str, size_t pos, size_t len) : std::string(str, pos, len)
{
	fields = nullptr;

}

Field::Field(const char* s) : std::string(s)
{
	fields = nullptr;

}

Field::Field(const char* s, size_t n) : std::string(s, n)
{
	fields = nullptr;

}

Field::Field(size_t n, char c) : std::string(n, c)
{
	fields = nullptr;

}

/**********************************************************************************************************************************/

//Destructor

Field::~Field()
{
	if (fields != nullptr)//checks to make sure the pointer has a value assigned to it
	{
		delete[] fields;
		fields = nullptr;
	}
}

/**********************************************************************************************************************************/

//other functions

//takes a field object and returns an uppercase version of it but does not change the field object
Field Field::strToUpper()
{
	int i = 0;
	Field temp = *this;

	for (i = 0; i < size(); i++) //loops through the field one latter at a time and converts to uppercase
		temp[i] = toupper(temp[i]);
	return temp;
}

//takes a field object and returns a lowercase version of it but does not change the field object
Field Field::strToLower()
{
	Field temp = *this;

	for (int i = 0; i < size(); i++)//loops through the field one latter at a time and converts to lowercase
		temp[i] = tolower(temp[i]);
	return temp;
}

//compares two field objects with case insensitivity and returns an int to indicate if they are the same or not (same as str.compare)
int Field::compareIgonreCase(const Field& str2) const
{

	Field str1 = *this;
	Field str2Temp = str2;

	//convert both field obj to uppercase
	str1 = str1.strToUpper();
	str2Temp = str2Temp.strToUpper();

	return str1.compare(str2Temp); //call and return the std::str.compare function
}

/**********************************************************************************************************************************/

//operator overloads for ifstream and istream

//reads from the screen in to the field obj until the enter key is reached. returns the istream obj
std::istream& operator >> (std::istream& in, Field& obj)
{
	if (in.peek() == '\n')
		in.ignore(1);
	std::getline(in, obj);
	return in;
}

//reads from a file in to the field obj until a comma is reached. returns the ifstream obj
std::ifstream& operator >> (std::ifstream& in, Field& obj)
{
	if (in.peek() == '\n')
		in.ignore(1);
	std::getline(in, obj, ',');
	return in;
}

/**********************************************************************************************************************************/

//takes the field that called it and a char delimiter and returns a pointer to a dynamically allocated array
Field* Field::split(char delimiter)
{
	int numRecords = 0;
	int currentRecord = 0;
	size_t startIndex = 0;
	size_t length = 0;
	Field record = *this; //creates a field record that is a copy of the field obj that called the function
	std::string::iterator iter = record.begin(); //creates an iterator that points to the beginning of record


	numRecords = std::count(record.begin(), record.end(), delimiter);//counts the number of delimiter chars in record
	fields = new Field[numRecords + 1]; //creates an array of fields based off how many delimiter chars there are

	for (int i = 0; iter != record.end(); i++) //uses the iter to check that we have not reached the end of record
	{
		if (record[i] == delimiter)
		{
			length = i - startIndex;//calculates the length of the str in between delm chars

			//assigns that str to the next empty space in the fields array
			fields[currentRecord] = record.substr(startIndex, length); //C6385 warning invalid due to for loop conditions (I think)

			//updates the index and array position for the next element in the array
			startIndex = i + 1;
			currentRecord = currentRecord + 1;

		}
		std::advance(iter, 1); //advances the loop through the record field obj
	}
	fields[currentRecord] = record.substr(startIndex, length); //add the last chunk of record to the array as this is not done in the loop
	
	return fields;
}
