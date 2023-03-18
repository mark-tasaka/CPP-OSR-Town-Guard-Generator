#ifndef ABILITY_SCORE_H
#define ABILITY_SCORE_H
#include<iostream>
#include<string>
#include<array>
#include "DieRoll.h"
using namespace std;

class AbilityScore
{
public:
	AbilityScore(array<int, 6> abilityScores)
	{
		this->strength = abilityScores[0];
		this->constition = abilityScores[1];
		this->dexterity = abilityScores[2];
		this->intelligence = abilityScores[3];
		this->wisdom = abilityScores[4];
		this->charisma = abilityScores[5];

		this->strengthMod = modifiderCalculate(abilityScores[0]);
		this->constitionMod = modifiderCalculate(abilityScores[1]);
		this->dexterityMod = modifiderCalculate(abilityScores[2]);
		this->intelligenceMod = modifiderCalculate(abilityScores[3]);
		this->wisdomMod = modifiderCalculate(abilityScores[4]);
		this->charismaMod = modifiderCalculate(abilityScores[5]);
	}

	int getStrength()
	{
		return strength;
	}

	int getConstitution()
	{
		return constition;
	}

	int getDexterity()
	{
		return dexterity;
	}

	int getIntelligence()
	{
		return intelligence;
	}

	int getWisdom()
	{
		return wisdom;
	}

	int getCharisma()
	{
		return charisma;
	}

	int modifiderCalculate(int score) const
	{
		int modifer = 0;

		if (score == 3)
		{
			modifer = -3;
		}

		if (score == 4 || score == 5)
		{
			modifer = -2;
		}

		if (score >= 6 && score <= 8)
		{
			modifer = -1;
		}

		if (score >= 13 && score <= 15)
		{
			modifer = 1;
		}

		if (score == 16 || score == 17)
		{
			modifer = 2;
		}

		if (score == 18)
		{
			modifer = 3;
		}

		return modifer;
	}

	int getStrengthMod()
	{
		return strengthMod;
	}

	int getConstitutionMod()
	{
		return constitionMod;
	}

	int getDexterityMod()
	{
		return dexterityMod;
	}

	int getIntelligenceMod()
	{
		return intelligenceMod;
	}

	int getWisdomMod()
	{
		return wisdomMod;
	}

	int getCharismaMod()
	{
		return charismaMod;
	}

	string returnModSign(int mod)
	{
		string sign;

		if (mod >= 1)
		{
			sign = " (+";
		}
		else
		{
			sign = " (";
		}

		return sign;
	}

private:
	int strength;
	int constition;
	int dexterity;
	int intelligence;
	int wisdom;
	int charisma;
	int strengthMod;
	int constitionMod;
	int dexterityMod;
	int intelligenceMod;
	int wisdomMod;
	int charismaMod;
};

#endif // !ABILITY_SCORE_H

