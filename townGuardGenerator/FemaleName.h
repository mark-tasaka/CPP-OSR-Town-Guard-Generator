#ifndef FEMALE_NAME_H
#define FEMALE_NAME_H
#include<iostream>
#include <vector>
#include <vector>
#include <stdlib.h>   
#include <stdio.h>
#include <time.h> 
using namespace std;


class FemaleName {
public:
	vector<string> africanGivenNamesFemale(int count) const;
	vector<string> africanAmericanGivenNamesFemale(int count) const;
	vector<string> americanGivenNamesFemale(int count) const;
	vector<string> arabicGivenNamesFemale(int count) const;
	vector<string> armenianGivenNamesFemale(int count) const;
	vector<string> celticGivenNamesFemale(int count) const;
	vector<string> chineseGivenNamesFemale(int count) const;
	vector<string> czechGivenNamesFemale(int count) const;
	vector<string> danishGivenNamesFemale(int count) const;
	vector<string> dutchGivenNamesFemale(int count) const;
	vector<string> egyptianGivenNamesFemale(int count) const;
	vector<string> englishGivenNamesFemale(int count) const;
	vector<string> finnishGivenNamesFemale(int count) const;
	vector<string> frenchGivenNamesFemale(int count) const;
	vector<string> gaelicGivenNamesFemale(int count) const;
	vector<string> germanGivenNamesFemale(int count) const;
	vector<string> greekGivenNamesFemale(int count) const;
	vector<string> hawaiianGivenNamesFemale(int count) const;
	vector<string> hebrewGivenNamesFemale(int count) const;
	vector<string> hindiGivenNamesFemale(int count) const;
	vector<string> hungarianGivenNamesFemale(int count) const;
	vector<string> indianGivenNamesFemale(int count) const;
	vector<string> irishGivenNamesFemale(int count) const;
	vector<string> italianGivenNamesFemale(int count) const;
	vector<string> japaneseGivenNamesFemale(int count) const;
	vector<string> koreanGivenNamesFemale(int count) const;
	vector<string> latinGivenNamesFemale(int count) const;
	vector<string> middleEnglishGivenNamesFemale(int count) const;
	vector<string> nativeAmericanGivenNamesFemale(int count) const;
	vector<string> norseGivenNamesFemale(int count) const;
	vector<string> oldEnglishGivenNamesFemale(int count) const;
	vector<string> oldFrenchGivenNamesFemale(int count) const;
	vector<string> oldGermanGivenNamesFemale(int count) const;
	vector<string> oldNorseGivenNamesFemale(int count) const;
	vector<string> persianGivenNamesFemale(int count) const;
	vector<string> polishGivenNamesFemale(int count) const;
	vector<string> polynesianGivenNamesFemale(int count) const;
	vector<string> russianGivenNamesFemale(int count) const;
	vector<string> sanskritGivenNamesFemale(int count) const;
	vector<string> scandinavianGivenNamesFemale(int count) const;
	vector<string> scottishGivenNamesFemale(int count) const;
	vector<string> slavicGivenNamesFemale(int count) const;
	vector<string> spanishGivenNamesFemale(int count) const;
	vector<string> swahiliGivenNamesFemale(int count) const;
	vector<string> swedishGivenNamesFemale(int count) const;
	vector<string> teutonicGivenNamesFemale(int count) const;
	vector<string> turkishGivenNamesFemale(int count) const;
	vector<string> vietnameseGivenNamesFemale(int count) const;
	vector<string> welshGivenNamesFemale(int count) const;
	vector<string> yiddishGivenNamesFemale(int count) const;
	vector<string> getFirstName(int select, int count) const;

private:
	vector<string> firstName;
};

#endif
