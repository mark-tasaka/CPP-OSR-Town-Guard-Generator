#ifndef RUN_PROGRAM_H
#define RUN_PROGRAM_H
#include "TownGuard.h"
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<memory>
#include<array>
#include<fstream>
#include <iomanip>

class RunProgram
{
public:
	void runProgram();

	void generateGuard();
	void generateCorporal(string role);
	void generateSergeant(string role);
	void generateStaffSergeant(string role);
	void generateLieutenant(string role);
	void generateSeniorLieutenant(string role);
	void generateCaptain(string role);

	//overloaded function
	ofstream& generateGuard(ofstream& file);
	ofstream& generateCorporal(ofstream& file, string role);
	ofstream& generateSergeant(ofstream& file, string role);
	ofstream& generateStaffSergeant(ofstream& file, string role);
	ofstream& generateLieutenant(ofstream& file, string role);
	ofstream& generateSeniorLieutenant(ofstream& file, string role);
	ofstream& generateCaptain(ofstream& file, string role);

	void generatePatrol(int quantity);
	void generatePatrols(int quantity);
	void generateSquad(int quantity);
	void generateSquads(int quantity);
	void generateWatch(int quantity);
	void generateCompany();

	//Overloaded function
	ofstream& generatePatrol(int quantity, ofstream& file);
	ofstream& generatePatrols(int quantity, ofstream& file);
	ofstream& generateSquad(int quantity, ofstream& file);
	ofstream& generateSquads(int quantity, ofstream& file);
	ofstream& generateWatch(int quantity, ofstream& file);
	ofstream& generateCompany(ofstream& file);

};

#endif // !RUN_PROGRAM_H

