#pragma once
#include<string>
using namespace std;
class Book
{
protected:
	string title;
	string author;
public:
	Book();
	void setTitle(string t);
	void setAuthor(string a);
	string getTitle();
	string getAuthor();
};
