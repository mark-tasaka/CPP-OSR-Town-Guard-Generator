#ifndef MALE_NAME_H
#define MALE_NAME_H
#include<iostream>
#include <vector>
#include <vector>
#include <stdlib.h>   
#include <stdio.h>
#include <time.h> 
using namespace std;


class MaleName {
public:
	//MaleNameGiven(int select);
	vector<string> africanGivenNamesMale(int count) const;
	vector<string> africanAmericanGivenNamesMale(int count) const;
	vector<string> americanGivenNamesMale(int count) const;
	vector<string> arabicGivenNamesMale(int count) const;
	vector<string> armenianGivenNamesMale(int count) const;
	vector<string> celticGivenNamesMale(int count) const;
	vector<string> chineseGivenNamesMale(int count) const;
	vector<string> czechGivenNamesMale(int count) const;
	vector<string> danishGivenNamesMale(int count) const;
	vector<string> dutchGivenNamesMale(int count) const;
	vector<string> egyptianGivenNamesMale(int count) const;
	vector<string> englishGivenNamesMale(int count) const;
	vector<string> finnishGivenNamesMale(int count) const;
	vector<string> frenchGivenNamesMale(int count) const;
	vector<string> gaelicGivenNamesMale(int count) const;
	vector<string> germanGivenNamesMale(int count) const;
	vector<string> greekGivenNamesMale(int count) const;
	vector<string> hawaiianGivenNamesMale(int count) const;
	vector<string> hebrewGivenNamesMale(int count) const;
	vector<string> hindiGivenNamesMale(int count) const;
	vector<string> hungarianGivenNamesMale(int count) const;
	vector<string> indianGivenNamesMale(int count) const;
	vector<string> irishGivenNamesMale(int count) const;
	vector<string> italianGivenNamesMale(int count) const;
	vector<string> japaneseGivenNamesMale(int count) const;
	vector<string> koreanGivenNamesMale(int count) const;
	vector<string> latinGivenNamesMale(int count) const;
	vector<string> middleEnglishGivenNamesMale(int count) const;
	vector<string> nativeAmericanGivenNamesMale(int count) const;
	vector<string> norseGivenNamesMale(int count) const;
	vector<string> oldEnglishGivenNamesMale(int count) const;
	vector<string> oldFrenchGivenNamesMale(int count) const;
	vector<string> oldGermanGivenNamesMale(int count) const;
	vector<string> oldNorseGivenNamesMale(int count) const;
	vector<string> persianGivenNamesMale(int count) const;
	vector<string> polishGivenNamesMale(int count) const;
	vector<string> polynesianGivenNamesMale(int count) const;
	vector<string> russianGivenNamesMale(int count) const;
	vector<string> sanskritGivenNamesMale(int count) const;
	vector<string> scandinavianGivenNamesMale(int count) const;
	vector<string> scottishGivenNamesMale(int count) const;
	vector<string> slavicGivenNamesMale(int count) const;
	vector<string> spanishGivenNamesMale(int count) const;
	vector<string> swahiliGivenNamesMale(int count) const;
	vector<string> swedishGivenNamesMale(int count) const;
	vector<string> teutonicGivenNamesMale(int count) const;
	vector<string> turkishGivenNamesMale(int count) const;
	vector<string> vietnameseGivenNamesMale(int count) const;
	vector<string> welshGivenNamesMale(int count) const;
	vector<string> yiddishGivenNamesMale(int count) const;
	vector<string> getFirstName(int select, int count) const;

private:
	vector<string> firstName;


};
#endif // !MALE_NAME_H
