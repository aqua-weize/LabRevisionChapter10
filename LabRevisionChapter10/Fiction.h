#include "Book.h"
class Fiction :public Book
{
private:
	int readingLevel;
public:
	Fiction();
	void setReadingLevel(int r);
	int getReadingLevel();
};
