# CPP-OSR-Town-Guard-Generator
D20 role-playing game system.  Each town guard will have unique individual stastics based on the siz core ability scores of the D20 system: Strength, Dexterity, Constitution, Intelligence, Wisdom, and Charisma.  The ability scores, along with the hit points, of the guards are generated by stimulation the die roll mechanics (i.e., 3d6 dice roll) of the D20 system.  Options will be added to allow for better optimization of the town guard statistics.

-----------------

Update 1.23: 2023-04-05

Implelemented the ability to generate external text file for the generation of a single 'patrol'.  Created Override for existing functions to allow for this feature.


Update 1.22: 2023-04-04

Did more code 'clean up' making the coding more readable, and improving the output of the program.


Update 1.21: 2023-04-03

Started the process of 'cleaning up' the code in the RunProgram files to make the program run more effeciently.


Update 1.20: 2023-04-02

Created files RunProgram.h and RunProgram.cpp to contain unit generation functions.  Cleaned up main.cpp, by moving code to RunProgram files.


Update 1.19: 2023-04-01

Impletemented more testing in main, allowing the user the option of generating: a patrol, patrols, a squad, squads, watch, and company.


Update 1.18: 2023-03-28

Implemented testing in main.


Update 1.17: 2023-03-27

Updated main, and implemented more testing.


Update 1.16: 2023-03-26

Impletemented more testing in main.


Update 1.15: 2023-03-25

Added runProgram() function to main.cpp, and keeped up the code in main.cpp.  Cleaned up the code in main.cpp.


Update 1.14: 2023-03-24

Added more functions to the TownGuard files (TownGuard.h & TownGuard.cpp).  Implemented more testing in main.cpp.


Update 1.13: 2023-03-23

Corrected some of the testing issues in main.cpp.  Add more functionality to the TownGuard files (TownGuard.h & TownGuard.cpp).


Update 1.12: 2023-03-22

Implemented testing in main.cpp.


Update 1.11: 2023-03-21

Added new functions to TownGuard.h and TownGuard.cpp.  Updated main.cpp.


Update 1.10: 2023-03-20

Added more functionality to the TownGuard files (TownGuard.h & TownGuard.cpp).


Update 1.09: 2023-03-19

Add new functions to the TownGuard files (TownGuard.h & TownGuard.cpp).


Update 1.08: 2023-03-18

Updated the TownGuard files (TownGuard.h & TownGuard.cpp) to incorporation the functionality of the AbilityScore and FullName files.  Used 'smart pointers' to create new Objects as a mean of being managing memory.


Update 1.07: 2023-03-17

Add functionality which enabled the generation of ability score modifiers for each of the six core ability score, based on each specific ability score.


Update 1.06: 2023-03-16

'Cleaned up' code to make files more 'readable'.


Update 1.05: 2023-03-15

Corrected the issues with random generation by correcting the errors with 'seeding' the rand() with 'time'.


Update 1.04: 2023-03-14

Add new file DieRoll.h, and test ability score generation in main.cpp.



Update 1.03: 2023-03-13

Impletemented a series of test in main.cpp to test the random generation of town guard names.


Update 1.02: 2023-03-12

Updates to main.cpp, FemaleName.h, FemaleName.cpp, FullName.h, Surname.h and Surname.cpp.


Update 1.01: 2023-03-11

New file added: FullName.h.  Updated files: MaleName.h, MaleName.cpp and TownGuard.h.


Initial commit: 2023-03-10

The initial commit for the C++ OSR Town Guard Generator.
