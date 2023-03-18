#ifndef TOWN_GUARD_H
#define TOWN_GUARD_H

#include <iostream>
#include <string>
#include "FullName.h"
#include "AbilityScore.h"

class TownGuard
{
public:
	TownGuard(int level, bool isMale);
	void setLevel(int level);
	int getLevel() const;
	void setTitle(int level);

private:
	int level;
	int hitPoints;
	string title;

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

	string name;
	string sex;
};

using namespace std;

#endif // !TOWN_GUARD_H

