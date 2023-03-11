#ifndef FULL_NAME_H
#define FULL_NAME_H
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include "FemaleName.h"
#include "MaleName.h"
#include "Surname.h"
using namespace std;

class FullName
{
public:
	FullName(bool isMale)
	{
		this->isMale = isMale;
	}

	string getFirstName()
	{
		srand(time(0));
		int nameSelect = rand() % 50 + 1;

		if (isMale == true)
		{
			MaleName* maleName = new MaleName();
			firstName = maleName->getFirstName(nameSelect);
		}
		else
		{

		}

	}

private:
	bool isMale;
	string firstName;
	string surname;
};

#endif // !FULL_NAME_H

