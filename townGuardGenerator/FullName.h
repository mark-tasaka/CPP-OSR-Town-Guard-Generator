#ifndef FULL_NAME_H
#define FULL_NAME_H
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<memory>
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
		//srand(time(0));
		srand(static_cast<unsigned int>(std::time(nullptr)));
		int nameSelect = rand() % 50 + 1;

		if (isMale == true)
		{
			//MaleName* maleName = new MaleName();
			//Unique pointer, better memory management
			unique_ptr<MaleName> maleName = make_unique<MaleName>();
			firstName = maleName->getFirstName(nameSelect);
		}
		else
		{
			//Unique pointer, better memory management
			unique_ptr<FemaleName> femaleName = make_unique<FemaleName>();
			firstName = femaleName->getFirstName(nameSelect);
		}

		this->firstName = firstName;

		return firstName;
	}

	string getSurname() 
	{
		//srand(time(0));
		srand(static_cast<unsigned int>(std::time(nullptr)));
		int nameSelect = rand() % 38 + 1;

		unique_ptr<Surname> lastName = make_unique<Surname>();
		surname = lastName->getSurnames(nameSelect);

		//Surname* theSurname = new Surname();
		//this->surname = theSurname->getSurnames(nameSelect);

		//this->surname = surname;

		return surname;
	}

	void setSex(bool isMale)
	{
		this->isMale = isMale;
	}

	string getSex()
	{
		if (isMale == true)
		{
			this->sex = "Male";
		}
		else
		{
			this->sex = "Female";
		}

		return sex;
	}

private:
	bool isMale;
	string firstName;
	string surname;
	string sex;
};

#endif // !FULL_NAME_H

