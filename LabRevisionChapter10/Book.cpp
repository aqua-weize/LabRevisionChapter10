#include"Book.h"
Book::Book()
{
	title = "";
	author = "";
}
void Book::setTitle(string t)
{
	title = t;
}
void Book::setAuthor(string a)
{
	author = a;
}
string Book::getTitle()
{
	return title;
}
string Book::getAuthor()
{
	return author;
}