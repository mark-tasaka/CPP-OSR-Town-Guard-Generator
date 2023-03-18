#include <iostream>
#include <string>
#include <array>
#include "TownGuard.h"
#include "DieRoll.h"
using namespace std;

TownGuard::TownGuard(int level, bool isMale)
{
	this->level = level;

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

	unique_ptr<FullName> guardname = make_unique<FullName>(isMale);
	name = guardname->getFirstName() + " " + guardname->getSurname();
	sex = guardname->getSex();
}