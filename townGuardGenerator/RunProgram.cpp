#include "RunProgram.h"
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<memory>
#include<array>
#include<fstream>
#include <iomanip>
#include<string>
using namespace std;

void RunProgram::runProgram()
{
	int choice = 0;
	int printChoice = 0;
	int fileSequence = 0;

	cout << "Welcome to the Town Guard Generator.  This program is designed to randomly generate Town Guard for OSR style campaign setting.  The town guard are organized into the following units:" << endl << endl;

	cout << "Patrol (3-5): 2-4 level 0 Guards, led by a 1st or 2nd level Corporal." << endl << endl;

	cout << "Squad (6-10): 4-8 level 0 Guards, led by a 3rd or 4th level Sergeant and a 1st or 2nd level Corporal." << endl << endl;

	cout << "Watch (2-4 Squads & 2-4 Patrols): Each Watch consists of 2-4 squads and 3-5 patrols.  A Watch is commanded by a 6th level Lieutentant and a 5th level Staff-Sergent" << endl << endl;

	cout << "Company (4 Watches): A company represents the force Town Guard assigned to each town.  A company is led by a 8th Level Captain.  The second-in-charge of Company is a 7th level Senior Lieutentant.  The Company has a command staff of Non-Commissioned Officers consisting of 1 Staff Sergeant (level 5), 1-3 Sergeants (level 3-4), and 2-4 Corporals (level 1-2)." << endl;

	cout << endl << endl;

	int repeat = 1;

	do
	{
		cout << "Please select on of the following options:" << endl;

		cout << "\t1. Patrol" << endl;

		cout << "\t2. 2-4 Patrols" << endl;

		cout << "\t3. Squad" << endl;

		cout << "\t4. 2-4 Squads" << endl;

		cout << "\t5. Watch" << endl;

		cout << "\t6. Company" << endl << endl;

		cin >> choice;
		cin.get();
		//checks if integre is entered.
		//if non-integre is entered, re-ask question.
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(256, '\n');
			cout << "An integer was not entered.  Please enter an integer value of either 1, 2, 3, 4, 5, or 6." << endl;
			cin >> choice;
			cin.get(); //consume newline
			cout << endl;
		}

		while (choice < 1 || choice > 6)
		{
			//if integer was not entered
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(256, '\n');
				cout << "An integer was not entered.  Please enter an integer value of either 1, 2, 3, 4, 5, or 6." << endl;
				cin >> choice;
				cin.get(); //consume newline
				cout << endl;
			}

			cin.clear();
			cout << "Please enter an integer value of either 1, 2, 3, 4, 5, or 6." << endl;
			cin >> choice;
			cin.get(); //consume newline
			cout << endl;
		}

		cout << endl;

		fileSequence++;

		if (choice == 1)
		{
			cout << "Do you wish to create a text file for the generated townguard?  Press 1 for text file." << endl << endl;
			cin >> printChoice;
			cin.get(); //consume newline

			if (printChoice != 1 || cin.fail() )
			{
				cout << "Single Patrol Generated" << endl << endl;
				int numPatrols = 1;
				generatePatrol(numPatrols);

				cout << endl;

				printChoice = 0;
			}
			else
			{
				//generating text file
				ofstream file;
				string fileNamePart1 = "Patrol_";
				string fileNamePart2 = to_string(fileSequence);
				string fileNamePart3 = ".txt";
				string outPutFile = fileNamePart1 + fileNamePart2 + fileNamePart3;

				file.open(outPutFile);

				cout << "Single Patrol Generated" << endl << endl;
				int numPatrols = 1;
				file << "" << setw(40) << "Townguard: Single Patrol" << endl << endl;
				generatePatrol(numPatrols, file);

				cout << endl;
				cout << "Text file: " << outPutFile << " has been generated." << endl;

				//reset printChoice to 0
				printChoice = 0;

			}

			
		}
		else if (choice == 2)
		{
			cout << "Do you wish to create a text file for the generated townguard?  Press 1 for text file." << endl << endl;
			cin >> printChoice;
			cin.get(); //consume newline

			int numPatrols = rand() % 2 + 2;

			if (printChoice != 1 || cin.fail())
			{
				cout << "Patrols Generated:" << numPatrols << endl << endl;
				generatePatrols(numPatrols);

				cout << endl;

				printChoice = 0;
			}
			else
			{
				//generating text file
				ofstream file;
				string fileNamePart1 = "Patrols_";
				string fileNamePart2 = to_string(fileSequence);
				string fileNamePart3 = ".txt";
				string outPutFile = fileNamePart1 + fileNamePart2 + fileNamePart3;

				file.open(outPutFile);

				cout << "Patrols Generated:" << numPatrols << endl << endl;

				file << "" << setw(40) << "Townguard: Patrols x " << numPatrols << endl << endl;
				generatePatrols(numPatrols, file);

				cout << endl;
				cout << "Text file: " << outPutFile << " has been generated." << endl;

				//reset printChoice to 0
				printChoice = 0;

			}

		}
		else if (choice == 3)
		{
			int numSquads = 1;

			cout << "Do you wish to create a text file for the generated townguard?  Press 1 for text file." << endl << endl;
			cin >> printChoice;
			cin.get(); //consume newline


			if (printChoice != 1 || cin.fail())
			{
				cout << "Squad Generated" << endl << endl;
				generateSquad(numSquads);

				cout << endl;

				printChoice = 0;
			}
			else
			{
				//generating text file
				ofstream file;
				string fileNamePart1 = "Squad_";
				string fileNamePart2 = to_string(fileSequence);
				string fileNamePart3 = ".txt";
				string outPutFile = fileNamePart1 + fileNamePart2 + fileNamePart3;

				file.open(outPutFile);

				cout << "Squad Generated" << endl << endl;

				file << "" << setw(40) << "Townguard: Single Squad"<< endl << endl;
				generateSquad(numSquads, file);

				cout << endl;
				cout << "Text file: " << outPutFile << " has been generated." << endl;

				//reset printChoice to 0
				printChoice = 0;

			}
		}
		else if (choice == 4)
		{
			cout << "Do you wish to create a text file for the generated townguard?  Press 1 for text file." << endl << endl;
			cin >> printChoice;
			cin.get(); //consume newline

			int numSquads = rand() % 2 + 2;

			if (printChoice != 1 || cin.fail())
			{
				cout << "Squads Generated:" << numSquads << endl << endl;
				generatePatrols(numSquads);

				cout << endl;

				printChoice = 0;
			}
			else
			{
				//generating text file
				ofstream file;
				string fileNamePart1 = "Squads_";
				string fileNamePart2 = to_string(fileSequence);
				string fileNamePart3 = ".txt";
				string outPutFile = fileNamePart1 + fileNamePart2 + fileNamePart3;

				file.open(outPutFile);

				cout << "Squads Generated:" << numSquads << endl << endl;

				file << "" << setw(40) << "Townguard: Squads x " << numSquads << endl << endl;
				generateSquads(numSquads, file);

				cout << endl;
				cout << "Text file: " << outPutFile << " has been generated." << endl;

				//reset printChoice to 0
				printChoice = 0;

			}
		}
		else if (choice == 5)
		{
			generateWatch();
		}
		else if (choice == 6)
		{
			generateCompany();
		}

		cout << endl;

		cout << "Would you like to generator more town guards.  Please enter 1 to continue, or another number to exit the program." << endl;

		cin >> repeat;
		cin.get();
		//checks if integre is entered.
		//if non-integre is entered, re-ask question.
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(256, '\n');
			cout << "An integer was not entered.  Please enter an integer value of either 1, 2, 3, 4, 5, or 6." << endl;
			cin >> choice;
			cin.get(); //consume newline
			cout << endl;
		}

	} while (repeat == 1);



}

//Level 0 Townguard
void RunProgram::generateGuard()
{
	bool characterMale;

	int sex = rand() % 10;
	if (sex > 3)
	{
		characterMale = true;
	}
	else
	{
		characterMale = false;
	}
	unique_ptr<TownGuard> guard = make_unique<TownGuard>(0, characterMale);

	cout << endl;

	cout << "\t" << guard->getName() << ", " << guard->getTitle() << "; Level: " << guard->getLevel() << "; Race: Human; Sex: " << guard->getSex() << endl;

	cout << "\tAC: " << guard->getArmourClass() << " (" << guard->getArmour() << "); HP: " << guard->getHitPoints() << " (HD: 1d8); THACO: " << guard->getTHACO() << "; Align: " << guard->getAlignment() << endl;

	cout << "\tStr: " << guard->getStrength() << guard->modifierSign(guard->getStrengthMod()) << guard->getStrengthMod() << ") Con: " << guard->getConstitution() << guard->modifierSign(guard->getConstitutionMod()) << guard->getConstitutionMod() << ") Dex: " << guard->getDexterity() << guard->modifierSign(guard->getDexterityMod()) << guard->getDexterityMod() << ") Int: " << guard->getIntelligence() << guard->modifierSign(guard->getIntelligenceMod()) << guard->getIntelligenceMod() << ") Wis: " << guard->getWisdom() << guard->modifierSign(guard->getWisdomMod()) << guard->getWisdomMod() << ") Cha: " << guard->getCharisma() << guard->modifierSign(guard->getCharismaMod()) << guard->getCharismaMod() << ")" << endl;

	cout << "\tWeapons: " << guard->getWeapons() << endl;
	cout << "\tTreasure: " << guard->getTreasure() << endl;

}

//Level 0 Townguard Overloaded
ofstream& RunProgram::generateGuard(ofstream& file)
{
	bool characterMale;

	int sex = rand() % 10;
	if (sex > 3)
	{
		characterMale = true;
	}
	else
	{
		characterMale = false;
	}
	unique_ptr<TownGuard> guard = make_unique<TownGuard>(0, characterMale);

	cout << endl;

	cout << "\t" << guard->getName() << ", " << guard->getTitle() << "; Level: " << guard->getLevel() << "; Race: Human; Sex: " << guard->getSex() << endl;

	cout << "\tAC: " << guard->getArmourClass() << " (" << guard->getArmour() << "); HP: " << guard->getHitPoints() << " (HD: 1d8); THACO: " << guard->getTHACO() << "; Align: " << guard->getAlignment() << endl;

	cout << "\tStr: " << guard->getStrength() << guard->modifierSign(guard->getStrengthMod()) << guard->getStrengthMod() << ") Con: " << guard->getConstitution() << guard->modifierSign(guard->getConstitutionMod()) << guard->getConstitutionMod() << ") Dex: " << guard->getDexterity() << guard->modifierSign(guard->getDexterityMod()) << guard->getDexterityMod() << ") Int: " << guard->getIntelligence() << guard->modifierSign(guard->getIntelligenceMod()) << guard->getIntelligenceMod() << ") Wis: " << guard->getWisdom() << guard->modifierSign(guard->getWisdomMod()) << guard->getWisdomMod() << ") Cha: " << guard->getCharisma() << guard->modifierSign(guard->getCharismaMod()) << guard->getCharismaMod() << ")" << endl;

	cout << "\tWeapons: " << guard->getWeapons() << endl;
	cout << "\tTreasure: " << guard->getTreasure() << endl;

	file << endl;

	file << "\t" << guard->getName() << ", " << guard->getTitle() << "; Level: " << guard->getLevel() << "; Race: Human; Sex: " << guard->getSex() << endl;

	file << "\tAC: " << guard->getArmourClass() << " (" << guard->getArmour() << "); HP: " << guard->getHitPoints() << " (HD: 1d8); THACO: " << guard->getTHACO() << "; Align: " << guard->getAlignment() << endl;

	file << "\tStr: " << guard->getStrength() << guard->modifierSign(guard->getStrengthMod()) << guard->getStrengthMod() << ") Con: " << guard->getConstitution() << guard->modifierSign(guard->getConstitutionMod()) << guard->getConstitutionMod() << ") Dex: " << guard->getDexterity() << guard->modifierSign(guard->getDexterityMod()) << guard->getDexterityMod() << ") Int: " << guard->getIntelligence() << guard->modifierSign(guard->getIntelligenceMod()) << guard->getIntelligenceMod() << ") Wis: " << guard->getWisdom() << guard->modifierSign(guard->getWisdomMod()) << guard->getWisdomMod() << ") Cha: " << guard->getCharisma() << guard->modifierSign(guard->getCharismaMod()) << guard->getCharismaMod() << ")" << endl;

	file << "\tWeapons: " << guard->getWeapons() << endl;
	file << "\tTreasure: " << guard->getTreasure() << endl;

	return file;

}

//Level 1-2 Corporate: Patrol Leader, Assistant Squad Leader, Staff Junior NCO
void RunProgram::generateCorporal(string role)
{
	bool characterMale;

	int sex = rand() % 10;
	if (sex > 3)
	{
		characterMale = true;
	}
	else
	{
		characterMale = false;
	}

	int corporalLevelSelect = rand() % 2 + 1;

	unique_ptr<TownGuard> corporal = make_unique<TownGuard>(corporalLevelSelect, characterMale);

	cout << "\t" << corporal->getName() << ", " << corporal->getTitle() << " (" << role << "); " << "Level: " << corporal->getLevel() << "; Race: Human; Sex: " << corporal->getSex() << endl;

	cout << "\tAC: " << corporal->getArmourClass() << " (" << corporal->getArmour() << "); HP: " << corporal->getHitPoints() << " (HD: " << corporalLevelSelect + 1 << "d8); THACO: " << corporal->getTHACO() << "; Align: " << corporal->getAlignment() << endl;

	cout << "\tStr: " << corporal->getStrength() << corporal->modifierSign(corporal->getStrengthMod()) << corporal->getStrengthMod() << ") Con: " << corporal->getConstitution() << corporal->modifierSign(corporal->getConstitutionMod()) << corporal->getConstitutionMod() << ") Dex: " << corporal->getDexterity() << corporal->modifierSign(corporal->getDexterityMod()) << corporal->getDexterityMod() << ") Int: " << corporal->getIntelligence() << corporal->modifierSign(corporal->getIntelligenceMod()) << corporal->getIntelligenceMod() << ") Wis: " << corporal->getWisdom() << corporal->modifierSign(corporal->getWisdomMod()) << corporal->getWisdomMod() << ") Cha: " << corporal->getCharisma() << corporal->modifierSign(corporal->getCharismaMod()) << corporal->getCharismaMod() << ")" << endl;

	cout << "\tWeapons: " << corporal->getWeapons() << endl;
	cout << "\tTreasure: " << corporal->getTreasure() << endl;


}


//Overload Level 1-2 Corporate: Patrol Leader, Assistant Squad Leader, Staff Junior NCO
ofstream& RunProgram::generateCorporal(ofstream& file, string role) 
{
	bool characterMale;

	int sex = rand() % 10;
	if (sex > 3)
	{
		characterMale = true;
	}
	else
	{
		characterMale = false;
	}

	int corporalLevelSelect = rand() % 2 + 1;

	unique_ptr<TownGuard> corporal = make_unique<TownGuard>(corporalLevelSelect, characterMale);

	cout << endl;

	cout << "\t" << corporal->getName() << ", " << corporal->getTitle() << " (" << role << "); " << "Level: " << corporal->getLevel() << "; Race: Human; Sex: " << corporal->getSex() << endl;

	cout << "\tAC: " << corporal->getArmourClass() << " (" << corporal->getArmour() << "); HP: " << corporal->getHitPoints() << " (HD: " << corporalLevelSelect + 1 << "d8); THACO: " << corporal->getTHACO() << "; Align: " << corporal->getAlignment() << endl;

	cout << "\tStr: " << corporal->getStrength() << corporal->modifierSign(corporal->getStrengthMod()) << corporal->getStrengthMod() << ") Con: " << corporal->getConstitution() << corporal->modifierSign(corporal->getConstitutionMod()) << corporal->getConstitutionMod() << ") Dex: " << corporal->getDexterity() << corporal->modifierSign(corporal->getDexterityMod()) << corporal->getDexterityMod() << ") Int: " << corporal->getIntelligence() << corporal->modifierSign(corporal->getIntelligenceMod()) << corporal->getIntelligenceMod() << ") Wis: " << corporal->getWisdom() << corporal->modifierSign(corporal->getWisdomMod()) << corporal->getWisdomMod() << ") Cha: " << corporal->getCharisma() << corporal->modifierSign(corporal->getCharismaMod()) << corporal->getCharismaMod() << ")" << endl;

	cout << "\tWeapons: " << corporal->getWeapons() << endl;
	cout << "\tTreasure: " << corporal->getTreasure() << endl;

	file << endl;

	file << "\t" << corporal->getName() << ", " << corporal->getTitle() << " (" << role << "); " << "Level: " << corporal->getLevel() << "; Race: Human; Sex: " << corporal->getSex() << endl;

	file << "\tAC: " << corporal->getArmourClass() << " (" << corporal->getArmour() << "); HP: " << corporal->getHitPoints() << " (HD: " << corporalLevelSelect + 1 << "d8); THACO: " << corporal->getTHACO() << "; Align: " << corporal->getAlignment() << endl;

	file << "\tStr: " << corporal->getStrength() << corporal->modifierSign(corporal->getStrengthMod()) << corporal->getStrengthMod() << ") Con: " << corporal->getConstitution() << corporal->modifierSign(corporal->getConstitutionMod()) << corporal->getConstitutionMod() << ") Dex: " << corporal->getDexterity() << corporal->modifierSign(corporal->getDexterityMod()) << corporal->getDexterityMod() << ") Int: " << corporal->getIntelligence() << corporal->modifierSign(corporal->getIntelligenceMod()) << corporal->getIntelligenceMod() << ") Wis: " << corporal->getWisdom() << corporal->modifierSign(corporal->getWisdomMod()) << corporal->getWisdomMod() << ") Cha: " << corporal->getCharisma() << corporal->modifierSign(corporal->getCharismaMod()) << corporal->getCharismaMod() << ")" << endl;

	file << "\tWeapons: " << corporal->getWeapons() << endl;
	file << "\tTreasure: " << corporal->getTreasure() << endl;

	return file;

}


void RunProgram::generateSergeant(string role)
{
	bool characterMale;

	int sex = rand() % 10;
	if (sex > 3)
	{
		characterMale = true;
	}
	else
	{
		characterMale = false;
	}

	int sergeantLevelSelect = rand() % 2 + 3;

	unique_ptr<TownGuard> sergeant = make_unique<TownGuard>(sergeantLevelSelect, characterMale);

	cout << endl;

	cout << "\t" << sergeant->getName() << ", " << sergeant->getTitle() << " (" << role << "); " << "Level: " << sergeant->getLevel() << "; Race: Human; Sex: " << sergeant->getSex() << endl;

	cout << "\tAC: " << sergeant->getArmourClass() << " (" << sergeant->getArmour() << "); HP: " << sergeant->getHitPoints() << " (HD: " << sergeantLevelSelect + 1 << "d8); THACO: " << sergeant->getTHACO() << "; Align: " << sergeant->getAlignment() << endl;

	cout << "\tStr: " << sergeant->getStrength() << sergeant->modifierSign(sergeant->getStrengthMod()) << sergeant->getStrengthMod() << ") Con: " << sergeant->getConstitution() << sergeant->modifierSign(sergeant->getConstitutionMod()) << sergeant->getConstitutionMod() << ") Dex: " << sergeant->getDexterity() << sergeant->modifierSign(sergeant->getDexterityMod()) << sergeant->getDexterityMod() << ") Int: " << sergeant->getIntelligence() << sergeant->modifierSign(sergeant->getIntelligenceMod()) << sergeant->getIntelligenceMod() << ") Wis: " << sergeant->getWisdom() << sergeant->modifierSign(sergeant->getWisdomMod()) << sergeant->getWisdomMod() << ") Cha: " << sergeant->getCharisma() << sergeant->modifierSign(sergeant->getCharismaMod()) << sergeant->getCharismaMod() << ")" << endl;

	cout << "\tWeapons: " << sergeant->getWeapons() << endl;
	cout << "\tTreasure: " << sergeant->getTreasure() << endl;

}


ofstream& RunProgram::generateSergeant(ofstream& file, string role)
{
	bool characterMale;

	int sex = rand() % 10;
	if (sex > 3)
	{
		characterMale = true;
	}
	else
	{
		characterMale = false;
	}

	int sergeantLevelSelect = rand() % 2 + 3;

	unique_ptr<TownGuard> sergeant = make_unique<TownGuard>(sergeantLevelSelect, characterMale);

	cout << endl;

	cout << "\t" << sergeant->getName() << ", " << sergeant->getTitle() << " (" << role << "); " << "Level: " << sergeant->getLevel() << "; Race: Human; Sex: " << sergeant->getSex() << endl;

	cout << "\tAC: " << sergeant->getArmourClass() << " (" << sergeant->getArmour() << "); HP: " << sergeant->getHitPoints() << " (HD: " << sergeantLevelSelect + 1 << "d8); THACO: " << sergeant->getTHACO() << "; Align: " << sergeant->getAlignment() << endl;

	cout << "\tStr: " << sergeant->getStrength() << sergeant->modifierSign(sergeant->getStrengthMod()) << sergeant->getStrengthMod() << ") Con: " << sergeant->getConstitution() << sergeant->modifierSign(sergeant->getConstitutionMod()) << sergeant->getConstitutionMod() << ") Dex: " << sergeant->getDexterity() << sergeant->modifierSign(sergeant->getDexterityMod()) << sergeant->getDexterityMod() << ") Int: " << sergeant->getIntelligence() << sergeant->modifierSign(sergeant->getIntelligenceMod()) << sergeant->getIntelligenceMod() << ") Wis: " << sergeant->getWisdom() << sergeant->modifierSign(sergeant->getWisdomMod()) << sergeant->getWisdomMod() << ") Cha: " << sergeant->getCharisma() << sergeant->modifierSign(sergeant->getCharismaMod()) << sergeant->getCharismaMod() << ")" << endl;

	cout << "\tWeapons: " << sergeant->getWeapons() << endl;
	cout << "\tTreasure: " << sergeant->getTreasure() << endl;

	file << endl;

	file << "\t" << sergeant->getName() << ", " << sergeant->getTitle() << " (" << role << "); " << "Level: " << sergeant->getLevel() << "; Race: Human; Sex: " << sergeant->getSex() << endl;

	file << "\tAC: " << sergeant->getArmourClass() << " (" << sergeant->getArmour() << "); HP: " << sergeant->getHitPoints() << " (HD: " << sergeantLevelSelect + 1 << "d8); THACO: " << sergeant->getTHACO() << "; Align: " << sergeant->getAlignment() << endl;

	file << "\tStr: " << sergeant->getStrength() << sergeant->modifierSign(sergeant->getStrengthMod()) << sergeant->getStrengthMod() << ") Con: " << sergeant->getConstitution() << sergeant->modifierSign(sergeant->getConstitutionMod()) << sergeant->getConstitutionMod() << ") Dex: " << sergeant->getDexterity() << sergeant->modifierSign(sergeant->getDexterityMod()) << sergeant->getDexterityMod() << ") Int: " << sergeant->getIntelligence() << sergeant->modifierSign(sergeant->getIntelligenceMod()) << sergeant->getIntelligenceMod() << ") Wis: " << sergeant->getWisdom() << sergeant->modifierSign(sergeant->getWisdomMod()) << sergeant->getWisdomMod() << ") Cha: " << sergeant->getCharisma() << sergeant->modifierSign(sergeant->getCharismaMod()) << sergeant->getCharismaMod() << ")" << endl;

	file << "\tWeapons: " << sergeant->getWeapons() << endl;
	file << "\tTreasure: " << sergeant->getTreasure() << endl;

	return file;
}


void RunProgram::generateStaffSergeant(string role)
{
	int staffSgtLevelSelect = 5;

	bool characterMaleSSgt;

	int sex2 = rand() % 10;
	if (sex2 > 3)
	{
		characterMaleSSgt = true;
	}
	else
	{
		characterMaleSSgt = false;
	}


	unique_ptr<TownGuard> staffSgt = make_unique<TownGuard>(staffSgtLevelSelect, characterMaleSSgt);

	cout << endl;

	cout << "\t" << staffSgt->getName() << ", " << staffSgt->getTitle() << " (" << role << "); " << "Level: " << staffSgt->getLevel() << "; Race: Human; Sex: " << staffSgt->getSex() << endl;

	cout << "\tAC: " << staffSgt->getArmourClass() << " (" << staffSgt->getArmour() << "); HP: " << staffSgt->getHitPoints() << " (HD: " << staffSgtLevelSelect + 1 << "d8); THACO: " << staffSgt->getTHACO() << "; Align: " << staffSgt->getAlignment() << endl;

	cout << "\tStr: " << staffSgt->getStrength() << staffSgt->modifierSign(staffSgt->getStrengthMod()) << staffSgt->getStrengthMod() << ") Con: " << staffSgt->getConstitution() << staffSgt->modifierSign(staffSgt->getConstitutionMod()) << staffSgt->getConstitutionMod() << ") Dex: " << staffSgt->getDexterity() << staffSgt->modifierSign(staffSgt->getDexterityMod()) << staffSgt->getDexterityMod() << ") Int: " << staffSgt->getIntelligence() << staffSgt->modifierSign(staffSgt->getIntelligenceMod()) << staffSgt->getIntelligenceMod() << ") Wis: " << staffSgt->getWisdom() << staffSgt->modifierSign(staffSgt->getWisdomMod()) << staffSgt->getWisdomMod() << ") Cha: " << staffSgt->getCharisma() << staffSgt->modifierSign(staffSgt->getCharismaMod()) << staffSgt->getCharismaMod() << ")" << endl;

	cout << "\tWeapons: " << staffSgt->getWeapons() << endl;
	cout << "\tTreasure: " << staffSgt->getTreasure() << endl << endl;

}

//overide function
ofstream& RunProgram::generateStaffSergeant(ofstream& file, string role)
{
	int staffSgtLevelSelect = 5;

	bool characterMaleSSgt;

	int sex2 = rand() % 10;
	if (sex2 > 3)
	{
		characterMaleSSgt = true;
	}
	else
	{
		characterMaleSSgt = false;
	}


	unique_ptr<TownGuard> staffSgt = make_unique<TownGuard>(staffSgtLevelSelect, characterMaleSSgt);

	cout << endl;

	cout << "\t" << staffSgt->getName() << ", " << staffSgt->getTitle() << " (" << role << "); " << "Level: " << staffSgt->getLevel() << "; Race: Human; Sex: " << staffSgt->getSex() << endl;

	cout << "\tAC: " << staffSgt->getArmourClass() << " (" << staffSgt->getArmour() << "); HP: " << staffSgt->getHitPoints() << " (HD: " << staffSgtLevelSelect + 1 << "d8); THACO: " << staffSgt->getTHACO() << "; Align: " << staffSgt->getAlignment() << endl;

	cout << "\tStr: " << staffSgt->getStrength() << staffSgt->modifierSign(staffSgt->getStrengthMod()) << staffSgt->getStrengthMod() << ") Con: " << staffSgt->getConstitution() << staffSgt->modifierSign(staffSgt->getConstitutionMod()) << staffSgt->getConstitutionMod() << ") Dex: " << staffSgt->getDexterity() << staffSgt->modifierSign(staffSgt->getDexterityMod()) << staffSgt->getDexterityMod() << ") Int: " << staffSgt->getIntelligence() << staffSgt->modifierSign(staffSgt->getIntelligenceMod()) << staffSgt->getIntelligenceMod() << ") Wis: " << staffSgt->getWisdom() << staffSgt->modifierSign(staffSgt->getWisdomMod()) << staffSgt->getWisdomMod() << ") Cha: " << staffSgt->getCharisma() << staffSgt->modifierSign(staffSgt->getCharismaMod()) << staffSgt->getCharismaMod() << ")" << endl;

	cout << "\tWeapons: " << staffSgt->getWeapons() << endl;
	cout << "\tTreasure: " << staffSgt->getTreasure() << endl << endl;

	file << endl;

	file << "\t" << staffSgt->getName() << ", " << staffSgt->getTitle() << " (" << role << "); " << "Level: " << staffSgt->getLevel() << "; Race: Human; Sex: " << staffSgt->getSex() << endl;

	file << "\tAC: " << staffSgt->getArmourClass() << " (" << staffSgt->getArmour() << "); HP: " << staffSgt->getHitPoints() << " (HD: " << staffSgtLevelSelect + 1 << "d8); THACO: " << staffSgt->getTHACO() << "; Align: " << staffSgt->getAlignment() << endl;

	file << "\tStr: " << staffSgt->getStrength() << staffSgt->modifierSign(staffSgt->getStrengthMod()) << staffSgt->getStrengthMod() << ") Con: " << staffSgt->getConstitution() << staffSgt->modifierSign(staffSgt->getConstitutionMod()) << staffSgt->getConstitutionMod() << ") Dex: " << staffSgt->getDexterity() << staffSgt->modifierSign(staffSgt->getDexterityMod()) << staffSgt->getDexterityMod() << ") Int: " << staffSgt->getIntelligence() << staffSgt->modifierSign(staffSgt->getIntelligenceMod()) << staffSgt->getIntelligenceMod() << ") Wis: " << staffSgt->getWisdom() << staffSgt->modifierSign(staffSgt->getWisdomMod()) << staffSgt->getWisdomMod() << ") Cha: " << staffSgt->getCharisma() << staffSgt->modifierSign(staffSgt->getCharismaMod()) << staffSgt->getCharismaMod() << ")" << endl;

	file << "\tWeapons: " << staffSgt->getWeapons() << endl;
	file << "\tTreasure: " << staffSgt->getTreasure() << endl << endl;

	return file;
}


void RunProgram::generateLieutenant(string role)
{
	int lieutentantLevelSelect = 6;
	bool characterMaleLt;

	int sex = rand() % 10;
	if (sex > 3)
	{
		characterMaleLt = true;
	}
	else
	{
		characterMaleLt = false;
	}

	unique_ptr<TownGuard> lieutentant = make_unique<TownGuard>(lieutentantLevelSelect, characterMaleLt);

	cout << endl;

	cout << "\t" << lieutentant->getName() << ", " << lieutentant->getTitle() << " (" << role << "); " << "Level: " << lieutentant->getLevel() << "; Race: Human; Sex: " << lieutentant->getSex() << endl;

	cout << "\tAC: " << lieutentant->getArmourClass() << " (" << lieutentant->getArmour() << "); HP: " << lieutentant->getHitPoints() << " (HD: " << lieutentantLevelSelect + 1 << "d8); THACO: " << lieutentant->getTHACO() << "; Align: " << lieutentant->getAlignment() << endl;

	cout << "\tStr: " << lieutentant->getStrength() << lieutentant->modifierSign(lieutentant->getStrengthMod()) << lieutentant->getStrengthMod() << ") Con: " << lieutentant->getConstitution() << lieutentant->modifierSign(lieutentant->getConstitutionMod()) << lieutentant->getConstitutionMod() << ") Dex: " << lieutentant->getDexterity() << lieutentant->modifierSign(lieutentant->getDexterityMod()) << lieutentant->getDexterityMod() << ") Int: " << lieutentant->getIntelligence() << lieutentant->modifierSign(lieutentant->getIntelligenceMod()) << lieutentant->getIntelligenceMod() << ") Wis: " << lieutentant->getWisdom() << lieutentant->modifierSign(lieutentant->getWisdomMod()) << lieutentant->getWisdomMod() << ") Cha: " << lieutentant->getCharisma() << lieutentant->modifierSign(lieutentant->getCharismaMod()) << lieutentant->getCharismaMod() << ")" << endl;

	cout << "\tWeapons: " << lieutentant->getWeapons() << endl;
	cout << "\tTreasure: " << lieutentant->getTreasure() << endl << endl;

}

//override function
ofstream& RunProgram::generateLieutenant(ofstream& file, string role)
{
	int lieutentantLevelSelect = 6;
	bool characterMaleLt;

	int sex = rand() % 10;
	if (sex > 3)
	{
		characterMaleLt = true;
	}
	else
	{
		characterMaleLt = false;
	}

	unique_ptr<TownGuard> lieutentant = make_unique<TownGuard>(lieutentantLevelSelect, characterMaleLt);

	cout << endl;

	cout << "\t" << lieutentant->getName() << ", " << lieutentant->getTitle() << " (" << role << "); " << "Level: " << lieutentant->getLevel() << "; Race: Human; Sex: " << lieutentant->getSex() << endl;

	cout << "\tAC: " << lieutentant->getArmourClass() << " (" << lieutentant->getArmour() << "); HP: " << lieutentant->getHitPoints() << " (HD: " << lieutentantLevelSelect + 1 << "d8); THACO: " << lieutentant->getTHACO() << "; Align: " << lieutentant->getAlignment() << endl;

	cout << "\tStr: " << lieutentant->getStrength() << lieutentant->modifierSign(lieutentant->getStrengthMod()) << lieutentant->getStrengthMod() << ") Con: " << lieutentant->getConstitution() << lieutentant->modifierSign(lieutentant->getConstitutionMod()) << lieutentant->getConstitutionMod() << ") Dex: " << lieutentant->getDexterity() << lieutentant->modifierSign(lieutentant->getDexterityMod()) << lieutentant->getDexterityMod() << ") Int: " << lieutentant->getIntelligence() << lieutentant->modifierSign(lieutentant->getIntelligenceMod()) << lieutentant->getIntelligenceMod() << ") Wis: " << lieutentant->getWisdom() << lieutentant->modifierSign(lieutentant->getWisdomMod()) << lieutentant->getWisdomMod() << ") Cha: " << lieutentant->getCharisma() << lieutentant->modifierSign(lieutentant->getCharismaMod()) << lieutentant->getCharismaMod() << ")" << endl;

	cout << "\tWeapons: " << lieutentant->getWeapons() << endl;
	cout << "\tTreasure: " << lieutentant->getTreasure() << endl << endl;

	file << endl;

	file << "\t" << lieutentant->getName() << ", " << lieutentant->getTitle() << " (" << role << "); " << "Level: " << lieutentant->getLevel() << "; Race: Human; Sex: " << lieutentant->getSex() << endl;

	file << "\tAC: " << lieutentant->getArmourClass() << " (" << lieutentant->getArmour() << "); HP: " << lieutentant->getHitPoints() << " (HD: " << lieutentantLevelSelect + 1 << "d8); THACO: " << lieutentant->getTHACO() << "; Align: " << lieutentant->getAlignment() << endl;

	file << "\tStr: " << lieutentant->getStrength() << lieutentant->modifierSign(lieutentant->getStrengthMod()) << lieutentant->getStrengthMod() << ") Con: " << lieutentant->getConstitution() << lieutentant->modifierSign(lieutentant->getConstitutionMod()) << lieutentant->getConstitutionMod() << ") Dex: " << lieutentant->getDexterity() << lieutentant->modifierSign(lieutentant->getDexterityMod()) << lieutentant->getDexterityMod() << ") Int: " << lieutentant->getIntelligence() << lieutentant->modifierSign(lieutentant->getIntelligenceMod()) << lieutentant->getIntelligenceMod() << ") Wis: " << lieutentant->getWisdom() << lieutentant->modifierSign(lieutentant->getWisdomMod()) << lieutentant->getWisdomMod() << ") Cha: " << lieutentant->getCharisma() << lieutentant->modifierSign(lieutentant->getCharismaMod()) << lieutentant->getCharismaMod() << ")" << endl;

	file << "\tWeapons: " << lieutentant->getWeapons() << endl;
	file << "\tTreasure: " << lieutentant->getTreasure() << endl << endl;

	return file;
}

//single patrol
void RunProgram::generatePatrol(int quantity)
{
	int patrolSize = rand() % 2 + 3;
	cout << endl << endl;

	if (quantity == 1)
	{
		cout << "Patrol: " << endl;
	}

	for (int j = 0; j <= patrolSize; j++)
	{

		if (j == 0)
		{
			generateCorporal("Patrol Leader");
		}
		else
		{
			generateGuard();
		}

	}

	cout << endl;

}

//single patrol Overloaded
ofstream& RunProgram::generatePatrol(int quantity, ofstream& file)
{
	//ofstream outputFile;
	int patrolSize = rand() % 2 + 3;
	cout << endl << endl;

	if (quantity == 1)
	{
		cout << "Patrol: " << endl;
		file << "Patrol: " << endl;
	}

	for (int j = 0; j <= patrolSize; j++)
	{

		if (j == 0)
		{
			generateCorporal(file, "Patrol Leader");
		}
		else
		{
			generateGuard(file);
		}

	}

	cout << endl;

	return file;
}

//multiple patrols
ofstream& RunProgram::generatePatrols(int quantity, ofstream& file)
{
	cout << endl << endl;
	file << endl << endl;

	for (int i = 1; i <= quantity; i++)
	{
		cout << "Patrol: " << i << endl;
		file << "Patrol: " << i << endl;
		generatePatrol(quantity, file);

		cout << endl;
		file << endl;
	}

	return file;

}

//Overloaded function multiple patrols
void RunProgram::generatePatrols(int quantity)
{
	cout << endl << endl;

	for (int i = 1; i <= quantity; i++)
	{
		cout << "Patrol: " << i << endl;
		generatePatrol(quantity);

		cout << endl;
	}

}

//single squad
void RunProgram::generateSquad(int quantity)
{

	int squadSize = rand() % 4 + 6;

	if (quantity == 1)
	{
		cout << "Squad: " << endl;
	}

	for (int j = 0; j <= squadSize; j++)
	{

		if (j == 0)
		{
			generateSergeant("Squad Leader");

		}
		else if (j == 1)
		{
			generateCorporal("Assistant Squad Leader");
		}
		else
		{
			generateGuard();
		}

	}

	cout << endl;

}

//Override generateSquad
ofstream& RunProgram::generateSquad(int quantity, ofstream& file) 
{

	int squadSize = rand() % 4 + 6;

	if (quantity == 1)
	{
		cout << "Squad: " << endl;
		file << "Squad: " << endl;
	}

	for (int j = 0; j <= squadSize; j++)
	{

		if (j == 0)
		{
			generateSergeant(file, "Squad Leader");

		}
		else if (j == 1)
		{
			generateCorporal(file, "Assistant Squad Leader");
		}
		else
		{
			generateGuard(file);
		}

	}

	cout << endl;
	file << endl;

	return file;

}

//generate 2-4 squads
void RunProgram::generateSquads(int quantity)
{

	for (int i = 1; i <= quantity; i++)
	{
		cout << "Squad " << i << ":" << endl;
		generateSquad(quantity);
	}
	cout << endl;

}

//Overriden function
ofstream& RunProgram::generateSquads(int quantity, ofstream& file)
{

	for (int i = 1; i <= quantity; i++)
	{
		cout << "Squad: " << i << endl;
		file << "Squad: " << i << endl;
		generateSquad(quantity, file);
	}
	cout << endl;

	return file;

}

void RunProgram::generateWatch()
{
	cout << "Watch: " << endl;

	generateLieutenant("Watch Commander");

	generateStaffSergeant("Senior Watch NCO");

	int numPatrols = rand() % 2 + 2;
	int numSquads = rand() % 2 + 2;

	generateSquads(numSquads);
	generatePatrols(numPatrols);
}

void RunProgram::generateCompany()
{
	cout << "Company: " << endl;
	int captainLevelSelect = 8;
	bool characterMaleCpt;

	int sex = rand() % 10;
	if (sex > 3)
	{
		characterMaleCpt = true;
	}
	else
	{
		characterMaleCpt = false;
	}


	unique_ptr<TownGuard> captain = make_unique<TownGuard>(captainLevelSelect, characterMaleCpt);

	cout << endl;

	cout << "\t" << captain->getName() << ", " << captain->getTitle() << " (Company Commander); " << "Level: " << captain->getLevel() << "; Race: Human; Sex: " << captain->getSex() << endl;

	cout << "\tAC: " << captain->getArmourClass() << " (" << captain->getArmour() << "); HP: " << captain->getHitPoints() << " (HD: " << captainLevelSelect + 1 << "d8); THACO: " << captain->getTHACO() << "; Align: " << captain->getAlignment() << endl;

	cout << "\tStr: " << captain->getStrength() << captain->modifierSign(captain->getStrengthMod()) << captain->getStrengthMod() << ") Con: " << captain->getConstitution() << captain->modifierSign(captain->getConstitutionMod()) << captain->getConstitutionMod() << ") Dex: " << captain->getDexterity() << captain->modifierSign(captain->getDexterityMod()) << captain->getDexterityMod() << ") Int: " << captain->getIntelligence() << captain->modifierSign(captain->getIntelligenceMod()) << captain->getIntelligenceMod() << ") Wis: " << captain->getWisdom() << captain->modifierSign(captain->getWisdomMod()) << captain->getWisdomMod() << ") Cha: " << captain->getCharisma() << captain->modifierSign(captain->getCharismaMod()) << captain->getCharismaMod() << ")" << endl;

	cout << "\tWeapons: " << captain->getWeapons() << endl;
	cout << "\tTreasure: " << captain->getTreasure() << endl << endl;


	int senLtLevelSelect = 7;

	bool characterMaleSLt;

	int sex2 = rand() % 10;
	if (sex2 > 3)
	{
		characterMaleSLt = true;
	}
	else
	{
		characterMaleSLt = false;
	}


	unique_ptr<TownGuard> senLt = make_unique<TownGuard>(senLtLevelSelect, characterMaleSLt);

	cout << endl;

	cout << "\t" << senLt->getName() << ", " << senLt->getTitle() << " (Executive Officer); " << "Level: " << senLt->getLevel() << "; Race: Human; Sex: " << senLt->getSex() << endl;

	cout << "\tAC: " << senLt->getArmourClass() << " (" << senLt->getArmour() << "); HP: " << senLt->getHitPoints() << " (HD: " << senLtLevelSelect + 1 << "d8); THACO: " << senLt->getTHACO() << "; Align: " << senLt->getAlignment() << endl;

	cout << "\tStr: " << senLt->getStrength() << senLt->modifierSign(senLt->getStrengthMod()) << senLt->getStrengthMod() << ") Con: " << senLt->getConstitution() << senLt->modifierSign(senLt->getConstitutionMod()) << senLt->getConstitutionMod() << ") Dex: " << senLt->getDexterity() << senLt->modifierSign(senLt->getDexterityMod()) << senLt->getDexterityMod() << ") Int: " << senLt->getIntelligence() << senLt->modifierSign(senLt->getIntelligenceMod()) << senLt->getIntelligenceMod() << ") Wis: " << senLt->getWisdom() << senLt->modifierSign(senLt->getWisdomMod()) << senLt->getWisdomMod() << ") Cha: " << senLt->getCharisma() << senLt->modifierSign(senLt->getCharismaMod()) << senLt->getCharismaMod() << ")" << endl;

	cout << "\tWeapons: " << senLt->getWeapons() << endl;
	cout << "\tTreasure: " << senLt->getTreasure() << endl << endl;

	cout << "Command Staff:" << endl;

	generateStaffSergeant("Command Staff Leader");

	int sergentsNum = rand() % 3 + 1;

	for (int i = 0; i < sergentsNum; i++)
	{
		generateSergeant("Command Staff NCO");
	}

	int corporalNum = rand() % 3 + 2;

	for (int i = 0; i < corporalNum; i++)
	{
		generateCorporal("Junior Command Staff NCO");
	}

	cout << endl;

	for (int i = 0; i < 4; i++)
	{
		generateWatch();
	}


}