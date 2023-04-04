#ifndef RUN_PROGRAM_H
#define RUN_PROGRAM_H
#include "TownGuard.h"
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<memory>
#include<array>

class RunProgram
{
public:
	void runProgram();

	void generateGuard();
	void generatePartolLeader();
	void generateSquadLeader();
	void generateAssistantSquadLeader();

	void generatePatrol(int quantity);
	void generatePatrols(int quantity);
	void generateSquad(int quantity);
	void generateSquads(int quantity);
	void generateWatch();
	void generateCompany();
};

#endif // !RUN_PROGRAM_H

