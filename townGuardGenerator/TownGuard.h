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
	void setArmour(int level);
	string getArmour() const;
	void setWeapons(int level);
	string getWeapons() const;
	void setSex(string sex);
	string getSex() const;
	void setTHACO(int level, int strengthMod);
	int getTHACO() const;
	void setName(string name);
	string getName() const;

	void setStrength(int strength);
	int getStrength() const;
	void setConstitution(int constitution);
	int getConstitution() const;
	void setDexterity(int dexterity);
	int getDexterity() const;
	void setIntelligence(int intelligence);
	int getIntelligence() const;
	void setWisdom(int wisdom);
	int getWisdom() const;
	void setCharisma(int charisma);
	int getCharisma() const;

	void setStrengthMod(int strengthMod);
	int getStrengthMod() const;
	void setConstitutionMod(int consitutionMod);
	int getConstitutionMod() const;
	void setDexterityMod(int dexterityMod);
	int getDexterityMod() const;
	void setIntelligenceMod(int intelligenceMod);
	int getIntelligenceMod() const;
	void setWisdomMod(int wisdomMod);
	int getWisdomMod() const;
	void setCharismaMod(int charismaMod);
	int getCharismaMod() const;
	
	string modifierSign(int mod);

private:
	int level;
	int hitPoints;
	string title;
	int armourClass;
	string armour;
	string weapons;
	string name;
	string sex;
	int thaco;

	int strength;
	int constitution;
	int dexterity;
	int intelligence;
	int wisdom;
	int charisma;
	int strengthMod;
	int constitutionMod;
	int dexterityMod;
	int intelligenceMod;
	int wisdomMod;
	int charismaMod;

};

using namespace std;

#endif // !TOWN_GUARD_H

