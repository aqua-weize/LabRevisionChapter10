#include "Book.h"
class NonFiction :public Book
{
private:
	int pages;
public:
	NonFiction();
	void setPages(int p);
	int getPages();	
};

