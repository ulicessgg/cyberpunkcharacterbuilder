#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include "badge.h"
#include "statsAndSkills.h"

using namespace std;

void badge::setLifepath(string runnerName, string saveFile)
{
    mercName = runnerName;

    myFile = saveFile;

    system("CLS");

    position();
}

void badge::position()
{
    playerFile.open(myFile, ios::app);

    int menuIn;

    cout << " What is Your Position on the Force?" << endl << endl
         << " 1) Guard" << endl
         << " 2) Standard Beat or Patrol" << endl
         << " 3) Criminal Investigation" << endl
         << " 4) Special Weapons and Tactics" << endl
         << " 5) Motor Patrol" << endl
         << " 6) Internal Affairs" << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What is Your Position on the Force?: Guard" << endl;
            break;
        case 2:
            playerFile << "What is Your Position on the Force?: Standard Beat or Patrol" << endl;
            break;
        case 3:
            playerFile << "What is Your Position on the Force?: Criminal Investigation" << endl;
            break;
        case 4:
            playerFile << "What is Your Position on the Force?: Special Weapons and Tactics" << endl;
            break;
        case 5:
            playerFile << "What is Your Position on the Force?: Motor Patrol" << endl;
            break;
        case 6:
            playerFile << "What is Your Position on the Force?: Internal Affairs" << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            position();
            break;
    }

    system("CLS");

    jurisdiction();
}

void badge::jurisdiction()
{
    int menuIn;

    cout << " How Wide is Your Group's Jurisdiction?" << endl << endl
         << " 1) Corpo Zones" << endl
         << " 2) Standard City Patrol Zone" << endl
         << " 3) Combat Zones" << endl
         << " 4) Outer City" << endl
         << " 5) Recovery Zones" << endl
         << " 6) Open Highways" << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "How Wide is Your Group's Jurisdiction?: Corpo Zones" << endl;
            break;
        case 2:
            playerFile << "How Wide is Your Group's Jurisdiction?: Standard City Patrol Zone" << endl;
            break;
        case 3:
            playerFile << "How Wide is Your Group's Jurisdiction?: Combat Zones" << endl;
            break;
        case 4:
            playerFile << "How Wide is Your Group's Jurisdiction?: Outer City" << endl;
            break;
        case 5:
            playerFile << "How Wide is Your Group's Jurisdiction?: Recovery Zones" << endl;
            break;
        case 6:
            playerFile << "How Wide is Your Group's Jurisdiction?: Open Highways" << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            jurisdiction();
            break;
    }

    system("CLS");

    corruption();
}

void badge::corruption()
{
    int menuIn;

    cout << " How Corrupt is Your Group?" << endl << endl
         << " 1) Fair, honest policing, strong ethical practices." << endl
         << " 2) Fair and honest policing, but hard on lawbreakers." << endl
         << " 3) Will occasionally slip and do unethical things, but it's rare." << endl
         << " 4) Willing to bend any rules to get the bad guys." << endl
         << " 5) Ruthless and determined to control The Street, even if it means breaking the law." << endl
         << " 6) Totally corrupt. You take bribes, engage in illegal, and unethical business all the time." << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "How Corrupt is Your Group?: Fair, honest policing, strong ethical practices" << endl;
            break;
        case 2:
            playerFile << "How Corrupt is Your Group?: Fair and honest policing, but hard on lawbreakers." << endl;
            break;
        case 3:
            playerFile << "How Corrupt is Your Group?: Will occasionally slip and do unethical things, but it's rare." << endl;
            break;
        case 4:
            playerFile << "How Corrupt is Your Group?: Willing to bend any rules to get the bad guys." << endl;
            break;
        case 5:
            playerFile << "How Corrupt is Your Group?: Ruthless and determined to control The Street, even if it means breaking the law." << endl;
            break;
        case 6:
            playerFile << "How Corrupt is Your Group?: Totally corrupt. You take bribes, engage in illegal, and unethical business all the time." << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            corruption();
            break;
    }

    system("CLS");

    yourEnemy();
}

void badge::yourEnemy()
{
    int menuIn;

    cout << " Who's Gunning for Your Group?" << endl << endl
         << " 1) Organized Crime" << endl
         << " 2) Boostergangs" << endl
         << " 3) Police Accountability Group" << endl
         << " 4) Dirty Politicians" << endl
         << " 5) Smugglers" << endl
         << " 6) Street Criminals" << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Who's Gunning for Your Group?: Organized Crime" << endl;
            break;
        case 2:
            playerFile << "Who's Gunning for Your Group?: Boostergangs" << endl;
            break;
        case 3:
            playerFile << "Who's Gunning for Your Group?: Police Accountability Group" << endl;
            break;
        case 4:
            playerFile << "Who's Gunning for Your Group?: Dirty Politicians" << endl;
            break;
        case 5:
            playerFile << "Who's Gunning for Your Group?: Smugglers" << endl;
            break;
        case 6:
            playerFile << "Who's Gunning for Your Group?: Street Criminals" << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            yourEnemy();
            break;
    }

    system("CLS");

    majorTarget();
}

void badge::majorTarget()
{
    statsAndSkills ripperDoc;
    int menuIn;

    cout << " Who is Your Group's Major Target?" << endl << endl
         << " 1) Organized Crime" << endl
         << " 2) Boostergangs" << endl
         << " 3) Drug Runners" << endl
         << " 4) Dirty Politicians" << endl
         << " 5) Smugglers" << endl
         << " 6) Street Crime" << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Who is Your Group's Major Target?: Organized Crime" << endl << endl;
            break;
        case 2:
            playerFile << "Who is Your Group's Major Target?: Boostergangs" << endl << endl;
            break;
        case 3:
            playerFile << "Who is Your Group's Major Target?: Drug Runners" << endl << endl;
            break;
        case 4:
            playerFile << "Who is Your Group's Major Target?: Dirty Politicians" << endl << endl;
            break;
        case 5:
            playerFile << "Who is Your Group's Major Target?: Smugglers" << endl << endl;
            break;
        case 6:
            playerFile << "Who is Your Group's Major Target?: Street Crime" << endl << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            majorTarget();
            break;
    }

    playerFile.close();

    system("CLS");

    ripperDoc.setStats(mercName, myFile);
}
