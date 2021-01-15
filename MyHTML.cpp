/*
Ben Kupernik
MyHtml.cpp
Source file

HTML function definition page. It contains a 5 functions designed to writeto .html files that will become the user interface for this game.
*/

/*****************************************************************************************************************************************/

#include "MyHTML.h"

void printHTMLIndex(std::string catagories[])
{
	std::ofstream indexPage;
	indexPage.open("index.HTML");
	printHTMLHead(indexPage);
	printHTMLContent(indexPage, catagories);
	printHTMLClose(indexPage);
	indexPage.close();
}

void printHTMLHead(std::ostream& out)
{
	out << "<html>\n <head>\n <title>" << "Jeopardy Game" << "</title>\n";
	out << "<script/type = 'text/javascript'>\n";
	//out << "function changeCellColor(cell)\n{\n";
	//out << "\tcell.style=\"background-color:\"000000;\"}\n";

	out << "function showAns() {\n";
	out << "\tvar x = document.getElementById(\"ANS\");\n";
	out << "\tif (x.style.display === \"none\") {\n";
	out << "\t\tx.style.display = \"block\";\n";
	out << "\t}\n";
	out << "\telse {\n";
	out << "\t\tx.style.display = \"none\";\n";
	out << "\t}\n";
	out << "}\n";
	out << "</script>\n</head>\n<body>\n";

}

void printHTMLContent(std::ostream& out, std::string catagories[])
{
	out << "<h1 align = \"center\">Jeopardy Game </h1>\n";
	out << "<table align = \"center\" table border = \"1\" cellpadding = \"30\" cellspacing = \"10\" style = \"background-color:#000000;\">\n";

	out << "<tr style =\"background-color:#1109eb;\">\n";

	out << "<td align = \"center\" style=\"color:ffff00;\"> " << catagories[0] <<"</td>\n";
	out << "<td align = \"center\" style=\"color:ffff00;\"> " << catagories[1] << "</td>\n";
	out << "<td align = \"center\" style=\"color:ffff00;\"> " << catagories[2] << "</td>\n";
	out << "<td align = \"center\" style=\"color:ffff00;\"> " << catagories[3] << "</td>\n";
	out << "<td align = \"center\" style=\"color:ffff00;\"> " << catagories[4] << "</td>\n";
	out << "<td align = \"center\" style=\"color:ffff00;\"> " << catagories[5] << "</td>\n";

	out << "</tr>\n<tr style =\"background-color:#1109eb;\">\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"1_100.html\" style=\"color:ffff00;\"> 100 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"2_100.html\" style=\"color:ffff00;\"> 100 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"3_100.html\" style=\"color:ffff00;\"> 100 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"4_100.html\" style=\"color:ffff00;\"> 100 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"5_100.html\" style=\"color:ffff00;\"> 100 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"6_100.html\" style=\"color:ffff00;\"> 100 </a></td>\n";
	
	out << "</tr>\n<tr style =\"background-color:#1109eb;\">\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"1_200.html\" style=\"color:ffff00;\"> 200 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"2_200.html\" style=\"color:ffff00;\"> 200 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"3_200.html\" style=\"color:ffff00;\"> 200 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"4_200.html\" style=\"color:ffff00;\"> 200 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"5_200.html\" style=\"color:ffff00;\"> 200 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"6_200.html\" style=\"color:ffff00;\"> 200 </a></td>\n";
	
	out << "</tr>\n<tr style =\"background-color:#1109eb;\">\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"1_300.html\" style=\"color:ffff00;\"> 300 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"2_300.html\" style=\"color:ffff00;\"> 300 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"3_300.html\" style=\"color:ffff00;\"> 300 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"4_300.html\" style=\"color:ffff00;\"> 300 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"5_300.html\" style=\"color:ffff00;\"> 300 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"6_300.html\" style=\"color:ffff00;\"> 300 </a></td>\n";
	
	out << "</tr>\n<tr style =\"background-color:#1109eb;\">\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"1_400.html\" style=\"color:ffff00;\"> 400 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"2_400.html\" style=\"color:ffff00;\"> 400 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"3_400.html\" style=\"color:ffff00;\"> 400 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"4_400.html\" style=\"color:ffff00;\"> 400 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"5_400.html\" style=\"color:ffff00;\"> 400 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"6_400.html\" style=\"color:ffff00;\"> 400 </a></td>\n";
	
	out << "</tr>\n<tr style =\"background-color:#1109eb;\">\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"1_500.html\" style=\"color:ffff00;\"> 500 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"2_500.html\" style=\"color:ffff00;\"> 500 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"3_500.html\" style=\"color:ffff00;\"> 500 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"4_500.html\" style=\"color:ffff00;\"> 500 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"5_500.html\" style=\"color:ffff00;\"> 500 </a></td>\n";
	out << "<td align = \"center\" onclick = \"changeCellColor(this);\"><a href = \"6_500.html\" style=\"color:ffff00;\"> 500 </a></td>\n";
	out << "</tr>\n</table>\n";
}

void printHTMLClose(std::ostream& out)
{
	out << "</body>\n</html>\n";
}

void printHTMLQuestions(Question subject, int catNum)
{
	std::string title;
	title.append(std::to_string(catNum));
	title.append("_");
	title.append(std::to_string(subject.getPoints()));
	title.append(".html");

	std::ofstream out;
	out.open(title);

	if (!out.is_open())
	{
		std::cout << "page can not be made" << std::endl;
		return;
	}

	printHTMLHead(out);
	title = subject.getCategory();

	out << "<h2 align=\"center\">CATEGORY: " << subject.getCategory() << "</h2>\n";
	out << "<h3 align=\"center\">Question: " << subject.getQuestion() << "</h3>\n";
	out << "<p align=\"center\"><button onClick=\"showAns()\">Click here to show/hide answer"
		<< "</button></p>\n";
	out << "<div id=\"ANS\" style=\"display: none;\" align=\"center\">"
		<< "Answer: " << subject.getAnswer() << "</div>";

	out << "\n<p align=\"center\"><a href=\"#\" onclick=\"history.go(-1)\">Go Back</a><\p>\n\n";

	printHTMLClose(out);
	out.close();

}