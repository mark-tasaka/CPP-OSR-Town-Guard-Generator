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
	string getTitle() const;
	void setHitPoints(int level, int conMod);
	int getHitPoints() const;
	void setArmourClass(int level, int dexMod);
	int getArmourClass() const;
	void setWeapons(int level);
	string getWeapons() const;
	void setSex(string sex);
	string getSex() const;
	void setTHACO(int level, int strengthMod);
	int getTHACO() const;

private:
	int level;
	int hitPoints;
	string title;
	int armourClass;
	string weapons;
	string name;
	string sex;
	int thaco;

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

using namespace std;

#endif // !TOWN_GUARD_H

