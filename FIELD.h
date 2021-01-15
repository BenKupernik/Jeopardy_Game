/*
 Ben Kupernik
 Field.h
 Header File
 
 Header file for field class. Filed class inherits from string and add function such as comparing two fields with case
 insensitivity and a split function that returns an array. Contains 6 constructors, 2 functions, 2 operational overloads
and one destructor.
*/

/*****************************************************************************************************************************************/

#ifndef FIELD_H
#define FIELD_H
#include <string>
#include <cctype>
#include <fstream>

class Field : public std::string
{
public:

	//constructors are the same as string class
	Field();
	Field(const std::string& str);
	Field(const std::string& str, size_t pos, size_t len = npos);
	Field(const char* s);
	Field(const char* s, size_t n);
	Field(size_t n, char c);
	//destructor
	~Field();

	//converts the field obj that called it to uppercase.
	Field strToUpper();
	//converts the field obj that called it to lowercase.
	Field strToLower();

	//compares two field objects with case insensitivity and returns an int to indicate if they are the same or not (same as str.compare)
	int compareIgonreCase(const Field& str) const;

	//reads from the screen until the enter key is read
	friend std::istream& operator >> (std::istream& in, Field& obj);
	//reads from a file until a comma is reached
	friend std::ifstream& operator >> (std::ifstream& in, Field& obj);

	//takes the field that called it and a char delimiter and returns a pointer to a dynamically allocated array
	Field* split(char delimiter);

private:
	Field* fields;

};








#endif

