/*
Ben Kupernik
myHTML.h
Header file

This is the declaration file for HTML function declarations. It contains a 5 functions designed to write
to .html files that will become the user interface for this game.
*/

/*****************************************************************************************************************************************/

#ifndef MyHTML_H
#define MyHTML_H

#include <string>
#include <iostream>
#include <fstream>
#include "question.h"


void printHTMLIndex(std::string catagories[]);//creates the index page with the main jeopardy table
void printHTMLHead(std::ostream& out);//prints header info common to all files
void printHTMLContent(std::ostream& out, std::string catagories[]);//prints the html code for the table in the index page
void printHTMLClose(std::ostream& out);//prints the html code to close all files
void printHTMLQuestions(Question subject, int catNum);//prints the html code for the question pages


#endif


