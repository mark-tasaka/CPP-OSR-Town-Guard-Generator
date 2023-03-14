#ifndef DIE_ROLL_H
#define DIE_ROLL_H
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<memory>
#include<array>
using namespace std;

class DieRoll
{
public:
	array<int, 6> generateAbilityScores()
	{
		srand(static_cast<unsigned int>(std::time(nullptr)));

		for (int i = 0; i < 6; i++)
		{
			int roll1 = rand() % 6 + 1;
			int roll2= rand() % 6 + 1;
			int roll3 = rand() % 6 + 1;

			int threeDSix = roll1 + roll2 + roll3;

			abilityScores[i] = threeDSix;
		}

		return abilityScores;
	}

private:
	array<int, 6> abilityScores;
};

#endif // !DIE_ROLL_H

