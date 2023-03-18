#ifndef DIE_ROLL_H
#define DIE_ROLL_H
#include<iostream>
#include<string>
#include<memory>
#include<array>
using namespace std;

class DieRoll
{
public:
	array<int, 6> generateAbilityScores()
	{

		for (int i = 0; i < 6; i++)
		{
			int threeDSix = 0;

			if (i == 0)
			{
				int roll = rand() % 8 + 1;
				threeDSix = 10 + roll;
			}
			else
			{
				int roll1 = rand() % 6 + 1;
				int roll2 = rand() % 6 + 1;
				int roll3 = rand() % 6 + 1;

				threeDSix = roll1 + roll2 + roll3;
			}

			abilityScores[i] = threeDSix;
		}

		return abilityScores;
	}

private:
	array<int, 6> abilityScores;
};

#endif // !DIE_ROLL_H

