#include "Fiction.h"
#include "NonFiction.h"
#include <iostream>
using namespace std;
int main()
{
	string ti;
	string aut;
	int rele;
	int pa;

	cout << "Enter book title: ";
	cin >> ti;
	cout << "Enter author name: ";
	cin >> aut;
	cout << "Enter fiction book reading level: ";
	cin >> rele;
	cout << "Enter non-fiction pages: ";
	cin >> pa;

	Fiction fic1;
	fic1.setAuthor(aut);
	fic1.setTitle(ti);
	fic1.setReadingLevel(rele);

	NonFiction nf1;	
	nf1.setPages(pa);

	cout << "Book title: " << fic1.getAuthor() << endl;
	cout << "Author name: " << fic1.getTitle() << endl;
	cout << "Reading level of fiction: " << fic1.getReadingLevel() << endl;
	cout << "Non-Fiction pages: " << nf1.getPages() << endl;

}