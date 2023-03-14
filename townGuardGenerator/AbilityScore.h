#ifndef ABILITY_SCORE_H
#define ABILITY_SCORE_H
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<memory>
#include<array>
#include "DieRoll.h"
using namespace std;

class AbilityScore
{
public:
	//AbilityScore()
	//{
	//	DieRoll score = DieRoll();
	//	array<int, 6> abilityScores = score.generateAbilityScores();
	//	strength = abilityScores[0];
	//	constition = abilityScores[1];
	//	dexterity = abilityScores[2];
	//	intelligence = abilityScores[3];
	//	wisdom = abilityScores[4];
	//	charisma = abilityScores[5];
	//}
	AbilityScore(array<int, 6> abilityScores)
	{
		this->strength = abilityScores[0];
		this->constition = abilityScores[1];
		this->dexterity = abilityScores[2];
		this->intelligence = abilityScores[3];
		this->wisdom = abilityScores[4];
		this->charisma = abilityScores[5];
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

private:
	int strength;
	int constition;
	int dexterity;
	int intelligence;
	int wisdom;
	int charisma;
	/*
	int strengthMod;
	int constitionMod;
	int dexterityMod;
	int intelligenceMod;
	int wisdomMod;
	int charismaMod;*/
};

#endif // !ABILITY_SCORE_H

