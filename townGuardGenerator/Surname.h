#ifndef SURNAME_H
#define SURNAME_H
#include<iostream>
#include <vector>
#include <vector>
#include <stdlib.h>   
#include <stdio.h>
#include <time.h> 
using namespace std;

class Surname
{
public:
	vector<string> africanSurnames(int count) const;
	vector<string> arabicSurnames(int count) const;
	vector<string> armenianSurnames(int count) const;
	vector<string> catalanSurnames(int count) const;
	vector<string> chineseSurnames(int count) const;
	vector<string> cornishSurnames(int count) const;
	vector<string> czechSurnames(int count) const;
	vector<string> danishSurnames(int count) const;
	vector<string> dutchSurnames(int count) const;
	vector<string> englishSurnames(int count) const;
	vector<string> finnishSurnames(int count) const;
	vector<string> frenchSurnames(int count) const;
	vector<string> galicianSurnames(int count) const;
	vector<string> germanSurnames(int count) const;
	vector<string> greekSurnames(int count) const;
	vector<string> hungarianSurnames(int count) const;
	vector<string> indianSurnames(int count) const;
	vector<string> irishSurnames(int count) const;
	vector<string> italianSurnames(int count) const;
	vector<string> japaneseSurnames(int count) const;
	vector<string> jewishSurnames(int count) const;
	vector<string> koreanSurnames(int count) const;
	vector<string> lithuanianSurnames(int count) const;
	vector<string> muslimSurnames(int count) const;
	vector<string> norwegianSurnames(int count) const;
	vector<string> polishSurnames(int count) const;
	vector<string> portugueseSurnames(int count) const;
	vector<string> russianSurnames(int count) const;
	vector<string> scandinavianSurnames(int count) const;
	vector<string> scottishSurnames(int count) const;
	vector<string> slavicSurnames(int count) const;
	vector<string> spanishSurnames(int count) const;
	vector<string> swedishSurnames(int count) const;
	vector<string> swissSurnames(int count) const;
	vector<string> turkishSurnames(int count) const;
	vector<string> ukranianSurnames(int count) const;
	vector<string> vietnameseSurnames(int count) const;
	vector<string> welshSurnames(int count) const;
	vector<string> getSurnames(int code, int count) const;

private:
	vector<string> surname;
};

#endif // !SURNAME_H