#include"Fiction.h"
Fiction::Fiction()
{
	readingLevel = 0;
}
void Fiction::setReadingLevel(int r)
{
	readingLevel = r;
}
int Fiction::getReadingLevel()
{
	return readingLevel;
}