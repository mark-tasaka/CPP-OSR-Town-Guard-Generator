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

	strength = abilityscores->getStrength();
	constition = abilityscores->getConstitution();
	dexterity = abilityscores->getDexterity();
	intelligence = abilityscores->getIntelligence();
	wisdom = abilityscores->getWisdom();
	charisma = abilityscores->getCharisma();

	strengthMod = abilityscores->getStrengthMod();
	constitionMod = abilityscores->getConstitutionMod();
	dexterityMod = abilityscores->getDexterityMod();
	intelligenceMod = abilityscores->getIntelligenceMod();
	wisdomMod = abilityscores->getWisdomMod();
	charismaMod = abilityscores->getCharismaMod();

	setHitPoints(level, constitionMod);

	unique_ptr<FullName> guardname = make_unique<FullName>(isMale);
	name = guardname->getFirstName() + " " + guardname->getSurname();
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
