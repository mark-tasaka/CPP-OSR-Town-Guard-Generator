#include <iostream>
#include <string>
#include <array>
#include "TownGuard.h"
#include "DieRoll.h"
using namespace std;

TownGuard::TownGuard(int level, bool isMale)
{
	this->level = level;

	setTitle(level);

	unique_ptr<DieRoll> dieRolls = make_unique<DieRoll>();

	array<int, 6> abilityScoreValues = dieRolls->generateAbilityScores();

	unique_ptr<AbilityScore> abilityscores = make_unique<AbilityScore>(abilityScoreValues);

	setStrength(abilityscores->getStrength());
	setConstitution(abilityscores->getConstitution());
	setDexterity(abilityscores->getDexterity());
	setIntelligence(abilityscores->getIntelligence());
	setWisdom(abilityscores->getWisdom());
	setCharisma(abilityscores->getCharisma());

	setStrengthMod(abilityscores->getStrengthMod());
	setConstitutionMod(abilityscores->getConstitutionMod());
	setDexterityMod(abilityscores->getDexterityMod());
	setIntelligenceMod(abilityscores->getIntelligenceMod());
	setWisdomMod(abilityscores->getWisdomMod());
	setCharismaMod(abilityscores->getCharismaMod());

	setHitPoints(level, abilityscores->getConstitutionMod());
	setArmourClass(level, abilityscores->getDexterityMod());
	setTHACO(level, abilityscores->getStrengthMod());
	setArmour(level);

	unique_ptr<FullName> guardname = make_unique<FullName>(isMale);
	setName(guardname->getFirstName() + " " + guardname->getSurname());
	setSex(guardname->getSex());

};

void TownGuard::setLevel(int level)
{
	this->level = level;
}

int TownGuard::getLevel() const
{
	return level;
}

void TownGuard::setTitle(int level)
{
	if (level == 0)
	{
		title = "Guard";
	}
	else if (level == 1 || level == 2)
	{
		title = "Corporal";
	}
	else if (level == 3 || level == 4)
	{
		title = "Sergeant";
	}
	else if (level == 5)
	{
		title = "Staff Sergeant";
	}
	else if (level == 6)
	{
		title = "Lieutentant";
	}
	else if (level == 7)
	{
		title = "Senior Lieutentant";
	}
	else if (level == 8)
	{
		title = "Captain";
	}

}

string TownGuard::getTitle() const
{
	return title;
}

void TownGuard::setHitPoints(int level, int conMod)
{
	hitPoints = 0;

	int hitPointsPerLevel = 0;

	for (int i = 0; i <= level; i++)
	{
		hitPointsPerLevel += rand() % 8 + 1;
		hitPointsPerLevel += conMod;

		//set minimum hit points per level
		if (hitPointsPerLevel < 3)
		{
			hitPointsPerLevel = 3;
		}

		hitPoints += hitPointsPerLevel;

		hitPointsPerLevel = 0;
	}
}

int TownGuard::getHitPoints() const
{
	return hitPoints;
}

void TownGuard::setArmourClass(int level, int dexMod)
{
	armourClass = 9 - dexMod;

	if (level < 6)
	{
		//chain mail & shield
		//for guards and NCOs
		armourClass -= 5;
	}
	else
	{
		//plate mail & shield
		//for commissioned officers
		armourClass -= 7;
	}
}

int TownGuard::getArmourClass() const
{
	return armourClass;
}


void TownGuard::setArmour(int level)
{
	if (level < 6)
	{
		armour = "chain mail & shield";
	}
	else
	{
		armour = "plate mail & shield";
	}

}

string TownGuard::getArmour() const
{
	return armour;
}


void TownGuard::setWeapons(int level)
{
	if (level < 6)
	{
		//for guards and NCOs
		int d4 = rand() % 4 + 1;

		if (d4 == 1)
		{
			weapons = "spear, short sword, dagger, light crossbow, bolts";
		}
		else if (d4 == 2)
		{
			weapons = "longsword, dagger, short bow, arrows";
		}
		else if (d4 == 3)
		{
			weapons = "polearm (halbred), longsword, dagger";
		}
		else
		{
			weapons = "longsword, dagger, heavy crossbow, bolts";
		}
	}
	else
	{
		//for commissioned officers
		int d3 = rand() % 3 + 1;

		if (d3 == 1)
		{
			weapons = "longsword +1, silver dagger, light crossbow, arrows";
		}
		else if (d3 == 2)
		{
			weapons = "longsword, dagger + 1, longbow + 1, arrows";
		}
		else
		{
			weapons = "longsword +2, dagger, shortbow, arrows";
		}

	}
}

string TownGuard::getWeapons() const
{
	return weapons;
}

void TownGuard::setSex(string sex)
{
	this->sex = sex;
}

string TownGuard::getSex() const
{
	return sex;
}

void TownGuard::setTHACO(int level, int strengthMod)
{
	thaco = 0;

	if (level == 0)
	{
		thaco = 20;
	}
	else if (level == 1)
	{
		thaco = 19;
	}
	else if (level == 2)
	{
		thaco = 18;
	}
	else if (level == 3 || level == 4)
	{
		thaco = 17;
	}
	else if (level == 5)
	{
		thaco = 16;
	}
	else if (level == 6)
	{
		thaco = 15;
	}
	else if (level == 7)
	{
		thaco = 14;
	}
	else if (level == 8)
	{
		thaco = 13;
	}

	thaco -= strengthMod;

}

int TownGuard::getTHACO() const
{
	return thaco;
}

void TownGuard::setName(string name)
{
	this->name = name;
}

string TownGuard::getName() const
{
	return name;
}


void TownGuard::setStrength(int strength)
{
	this->strength = strength;
}

int TownGuard::getStrength() const
{
	return strength;
}

void TownGuard::setConstitution(int constitution)
{
	this->constitution = constitution;
}

int TownGuard::getConstitution() const
{
	return constitution;
}

void TownGuard::setDexterity(int dexterity)
{
	this->dexterity = dexterity;
}

int TownGuard::getDexterity() const
{
	return dexterity;
}

void TownGuard::setIntelligence(int intelligence)
{
	this->intelligence = intelligence;
}

int TownGuard::getIntelligence() const
{
	return intelligence;
}

void TownGuard::setWisdom(int wisdom)
{
	this->wisdom = wisdom;
}

int TownGuard::getWisdom() const
{
	return wisdom;
}

void TownGuard::setCharisma(int charisma)
{
	this->charisma = charisma;
}

int TownGuard::getCharisma() const
{
	return charisma;
}

void TownGuard::setStrengthMod(int strengthMod)
{
	this->strengthMod = strengthMod;
}

int TownGuard::getStrengthMod() const
{
	return strengthMod;
}

void TownGuard::setConstitutionMod(int consitutionMod)
{
	this->constitutionMod = consitutionMod;
}

int TownGuard::getConstitutionMod() const
{
	return constitutionMod;
}

void TownGuard::setDexterityMod(int dexterityMod)
{
	this->dexterityMod = dexterityMod;
}

int TownGuard::getDexterityMod() const
{
	return dexterityMod;
}

void TownGuard::setIntelligenceMod(int intelligenceMod)
{
	this->intelligenceMod = intelligenceMod;
}

int TownGuard::getIntelligenceMod() const
{
	return intelligenceMod;
}

void TownGuard::setWisdomMod(int wisdomMod)
{
	this->wisdomMod = wisdomMod;
}

int TownGuard::getWisdomMod() const
{
	return wisdomMod;
}

void TownGuard::setCharismaMod(int charismaMod)
{
	this->charismaMod = charismaMod;
}

int TownGuard::getCharismaMod() const
{
	return charismaMod;
}

string TownGuard::modifierSign(int mod)
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
