#ifndef SURNAME_H
#define SURNAME_H
#include<iostream>
#include <vector>
#include <stdlib.h>   
#include <stdio.h>
#include <time.h> 
using namespace std;

class Surname
{
public:
	string africanSurnames() const;
	string arabicSurnames() const;
	string armenianSurnames() const;
	string catalanSurnames() const;
	string chineseSurnames() const;
	string cornishSurnames() const;
	string czechSurnames() const;
	string danishSurnames() const;
	string dutchSurnames() const;
	string englishSurnames() const;
	string finnishSurnames() const;
	string frenchSurnames() const;
	string galicianSurnames() const;
	string germanSurnames() const;
	string greekSurnames() const;
	string hungarianSurnames() const;
	string indianSurnames() const;
	string irishSurnames() const;
	string italianSurnames() const;
	string japaneseSurnames() const;
	string jewishSurnames() const;
	string koreanSurnames() const;
	string lithuanianSurnames() const;
	string muslimSurnames() const;
	string norwegianSurnames() const;
	string polishSurnames() const;
	string portugueseSurnames() const;
	string russianSurnames() const;
	string scandinavianSurnames() const;
	string scottishSurnames() const;
	string slavicSurnames() const;
	string spanishSurnames() const;
	string swedishSurnames() const;
	string swissSurnames() const;
	string turkishSurnames() const;
	string ukranianSurnames() const;
	string vietnameseSurnames() const;
	string welshSurnames() const;
	string getSurnames(int code) const;

private:
	string surname;
};

#endif // !SURNAME_H