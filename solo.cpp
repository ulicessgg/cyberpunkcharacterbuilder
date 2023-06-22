#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include "solo.h"
#include "statsAndSkills.h"

using namespace std;

void solo::setLifepath(string runnerName, string saveFile)
{
    mercName = runnerName;

    myFile = saveFile;

    system("CLS");

    kindOf();
}

void solo::kindOf()
{
    playerFile.open(myFile, ios::app);

    int menuIn;

    cout << " What Kind of Solo are You?" << endl << endl
         << " 1) Bodyguard" << endl
         << " 2) Street Muscle for Hire" << endl
         << " 3) Corpo Enforcer who takes jobs on the side" << endl
         << " 4) Corpo or Freelance Black Ops Agent" << endl
         << " 5) Local Vigilante for Hire" << endl
         << " 6) Assassin/Hitman for Hire" << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What Kind of Solo are You?: Bodyguard" << endl;
            break;
        case 2:
            playerFile << "What Kind of Solo are You?: Street Muscle for Hire" << endl;
            break;
        case 3:
            playerFile << "What Kind of Solo are You?: Corpo Enforcer who takes jobs on the side" << endl;
            break;
        case 4:
            playerFile << "What Kind of Solo are You?: Corpo or Freelance Black Ops Agent" << endl;
            break;
        case 5:
            playerFile << "What Kind of Solo are You?: Local Vigilante for Hire" << endl;
            break;
        case 6:
            playerFile << "What Kind of Solo are You?: Assassin/Hitman for Hire" << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            kindOf();
            break;
    }

    system("CLS");

    moralCompass();
}

void solo::moralCompass()
{
    int menuIn;

    cout << " What's Your Moral Compass Like?" << endl << endl
         << " 1) Always working for good, trying to take out the \"bad guys\"." << endl
         << " 2) Always spare the innocent." << endl
         << " 3) Will occasionally slip and do unethical or bad things, bit it's rare." << endl
         << " 4) Ruthless and profit centered; you will work for anyone, take any job for the money." << endl
         << " 5) Willing to bend the rules to get the job done." << endl
         << " 6) Totally evil. You engage in illegal, unethical work all the time; in fact, you enjoy it." << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What's Your Moral Compass Like?: Always working for good, trying to take out the \"bad guys\"." << endl;
            break;
        case 2:
            playerFile << "What's Your Moral Compass Like?: Always spare the innocent." << endl;
            break;
        case 3:
            playerFile << "What's Your Moral Compass Like?: Will occasionally slip and do unethical or bad things, bit it's rare." << endl;
            break;
        case 4:
            playerFile << "What's Your Moral Compass Like?: Ruthless and profit centered; you will work for anyone, take any job for the money." << endl;
            break;
        case 5:
            playerFile << "What's Your Moral Compass Like?: Willing to bend the rules to get the job done." << endl;
            break;
        case 6:
            playerFile << "What's Your Moral Compass Like?: Totally evil. You engage in illegal, unethical work all the time; in fact, you enjoy it." << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            moralCompass();
            break;
    }

    system("CLS");

    myTurf();
}

void solo::myTurf()
{
    int menuIn;

    cout << " What's Your Operational Territory?" << endl << endl
         << " 1) A Corpo Zone" << endl
         << " 2) Combat Zones" << endl
         << " 3) The whole City" << endl
         << " 4) The territory of a single Corp" << endl
         << " 5) The territory of a particular Fixer or contact" << endl
         << " 6) Wherever the money takes you" << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What's Your Operational Territory?: A Corpo Zone" << endl;
            break;
        case 2:
            playerFile << "What's Your Operational Territory?: Combat Zones" << endl;
            break;
        case 3:
            playerFile << "What's Your Operational Territory?: The whole City" << endl;
            break;
        case 4:
            playerFile << "What's Your Operational Territory?: The territory of a single Corp" << endl;
            break;
        case 5:
            playerFile << "What's Your Operational Territory?: The territory of a particular Fixer or contact" << endl;
            break;
        case 6:
            playerFile << "What's Your Operational Territory?: Wherever the money takes me" << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            myTurf();
            break;
    }

    system("CLS");

    yourEnemy();
}

void solo::yourEnemy()
{
    statsAndSkills ripperDoc;
    int menuIn;

    cout << " Who's Gunning for You?" << endl << endl
         << " 1) A Corp you may have angered." << endl
         << " 2) A boostergang you may have tackled earlier." << endl
         << " 3) Corrupt Badge or Badge who mistakenly think you're guilty of something." << endl
         << " 4) A rival Solo from another Corp." << endl
         << " 5) A Fixer who sees you as a threat." << endl
         << " 6) A rival Solo who sees you as their nemesis." << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Who's Gunning for You?: A Corp you may have angered." << endl << endl;
            break;
        case 2:
            playerFile << "Who's Gunning for You?: A boostergang you may have tackled earlier." << endl << endl;
            break;
        case 3:
            playerFile << "Who's Gunning for You?: Corrupt Badge or Badge who mistakenly think you're guilty of something." << endl << endl;
            break;
        case 4:
            playerFile << "Who's Gunning for You?: A rival Solo from another Corp." << endl << endl;
            break;
        case 5:
            playerFile << "Who's Gunning for You?: A Fixer who sees you as a threat." << endl << endl;
            break;
        case 6:
            playerFile << "Who's Gunning for You?: A rival Solo who sees you as their nemesis." << endl << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            yourEnemy();
            break;
    }

    playerFile.close();

    system("CLS");

    ripperDoc.setStats(mercName, myFile);
}
