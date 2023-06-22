#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include "techie.h"
#include "statsAndSkills.h"

using namespace std;

void techie::setLifepath(string runnerName, string saveFile)
{
    mercName = runnerName;

    myFile = saveFile;

    system("CLS");

    kindOf();
}

void techie::kindOf()
{
    playerFile.open(myFile, ios::app);

    int menuIn;
    string choice;

    cout << " What Kind of Tech are You?" << endl << endl
         << " 1) Cyberware Technician" << endl
         << " 2) Vehicle Mechanic" << endl
         << " 3) Jack of All Trades" << endl
         << " 4) Small Electronics Technician" << endl
         << " 5) Weaponsmith" << endl
         << " 6) Crazy Inventor" << endl
         << " 7) Robot and Drone Mechanic" << endl
         << " 8) Heavy Machinery Mechanic" << endl
         << " 9) Scavenger" << endl
         << " 10) Nautical Mechanic" << endl
         << " 11) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What Kind of Tech are You?: Cyberware Technician" << endl;
            break;
        case 2:
            playerFile << "What Kind of Tech are You?: Vehicle Mechanic" << endl;
            break;
        case 3:
            playerFile << "What Kind of Tech are You?: Jack of All Trades" << endl;
            break;
        case 4:
            playerFile << "What Kind of Tech are You?: Small Electronics Technician" << endl;
            break;
        case 5:
            playerFile << "What Kind of Tech are You?: Weaponsmith" << endl;
            break;
        case 6:
            playerFile << "What Kind of Tech are You?: Crazy Inventor" << endl;
            break;
        case 7:
            playerFile << "What Kind of Tech are You?: Robot and Drone Mechanic" << endl;
            break;
        case 8:
            playerFile << "What Kind of Tech are You?: Heavy Machinery Mechanic" << endl;
            break;
        case 9:
            playerFile << "What Kind of Tech are You?: Scavenger" << endl;
            break;
        case 10:
            playerFile << "What Kind of Tech are You?: Nautical Mechanic" << endl;
            break;
        case 11:
            break;
        default:
            system("CLS");
            kindOf();
            break;
    }

    system("CLS");

    cout << " Got a Partner, or Do You Work Alone?" << endl
    << " " << mercName << ": ";
    cin >> choice;

    playerFile << "Got a Partner, or Do You Work Alone?: " << choice << endl;

    system("CLS");

    if(choice== "Yes" || choice == "yEs" || choice== "yeS" || choice == "yES" || choice== "YEs" || choice == "YES" || choice== "YeS" || choice == "yes")
    {
        partner();
    }
    else if(choice== "No" || choice == "nO" || choice== "NO" || choice == "no")
    {
        workspace();
    }
    else
    {
        kindOf();
    }
}

void techie::workspace()
{
    int menuIn;

    cout << " What's Your Workspace Like?" << endl << endl
         << " 1) A mess strewn with blueprint paper." << endl
         << " 2) Everything is color coded, but it's still a nightmare." << endl
         << " 3) Totally digital and obsessively backed up every day." << endl
         << " 4) You design everything on your agent." << endl
         << " 5) You keep everything just in case you need it later." << endl
         << " 6) Only you understand your filing system." << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What's Your Workspace Like?: A mess strewn with blueprint paper." << endl;
            break;
        case 2:
            playerFile << "What's Your Workspace Like?: Everything is color coded, but it's still a nightmare." << endl;
            break;
        case 3:
            playerFile << "What's Your Workspace Like?: Totally digital and obsessively backed up every day." << endl;
            break;
        case 4:
            playerFile << "What's Your Workspace Like?: You design everything on your agent." << endl;
            break;
        case 5:
            playerFile << "What's Your Workspace Like?: You keep everything just in case you need it later." << endl;
            break;
        case 6:
            playerFile << "What's Your Workspace Like?: Only you understand your filing system." << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            workspace();
            break;
    }

    system("CLS");

    clients();
}

void techie::partner()
{
    int menuIn;

    cout << " If You Have a Partner, Who are They?" << endl << endl
         << " 1) Family Member" << endl
         << " 2) Old Friend" << endl
         << " 3) Possible romantic partner as well" << endl
         << " 4) Mentor" << endl
         << " 5) Secret partner with mob/gang connections" << endl
         << " 6) Secret partner with Corpo connections" << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "If You Have a Partner, Who are They?: Family Member" << endl;
            break;
        case 2:
            playerFile << "If You Have a Partner, Who are They?: Old Friend" << endl;
            break;
        case 3:
            playerFile << "If You Have a Partner, Who are They?: Possible romantic partner as well" << endl;
            break;
        case 4:
            playerFile << "If You Have a Partner, Who are They?: Mentor" << endl;
            break;
        case 5:
            playerFile << "If You Have a Partner, Who are They?: Secret partner with mob/gang connections" << endl;
            break;
        case 6:
            playerFile << "If You Have a Partner, Who are They?: Secret partner with Corpo connections" << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            partner();
            break;
    }

    system("CLS");

    workspace();
}

void techie::clients()
{
    int menuIn;

    cout << " Who are Your Main Clients?" << endl << endl
         << " 1) Local Fixers who send you clients." << endl
         << " 2) Local gangers whop also protect your work area or home." << endl
         << " 3) Corpo Execs who use you for \"black project\" work." << endl
         << " 4) Local Solos or other combat types who use you for weapons upkeep." << endl
         << " 5) Local Nomads and Fixers who bring you \"found\" tech to repair." << endl
         << " 6) You work for yourself and sell what you invent/repair." << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Who are Your Main Clients?: Local Fixers who send you clients." << endl;
            break;
        case 2:
            playerFile << "Who are Your Main Clients?: Local gangers whop also protect your work area or home." << endl;
            break;
        case 3:
            playerFile << "Who are Your Main Clients?: Corpo Execs who use you for \"black project\" work." << endl;
            break;
        case 4:
            playerFile << "Who are Your Main Clients?: Local Solos or other combat types who use you for weapons upkeep." << endl;
            break;
        case 5:
            playerFile << "Who are Your Main Clients?: Local Nomads and Fixers who bring you \"found\" tech to repair." << endl;
            break;
        case 6:
            playerFile << "Who are Your Main Clients?: You work for yourself and sell what you invent/repair." << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            clients();
            break;
    }

    system("CLS");

    supplies();
}

void techie::supplies()
{
    int menuIn;

    cout << " Where Do You Get Your Supplies?" << endl << endl
         << " 1) Scavenge the wreckage you find in abandoned City Zones." << endl
         << " 2) Strip gear from bodies after firefights." << endl
         << " 3) Have a local bring you supplies in exchange for repair work." << endl
         << " 4) Corpo Execs supply you with stuff in exchange for your services." << endl
         << " 5) You have backdoors into a few Corpo warehouses." << endl
         << " 6) You hit the Night Markets and score deals whenever you can." << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Where Do You Get Your Supplies?: Scavenge the wreckage you find in abandoned City Zones." << endl;
            break;
        case 2:
            playerFile << "Where Do You Get Your Supplies?: Strip gear from bodies after firefights." << endl;
            break;
        case 3:
            playerFile << "Where Do You Get Your Supplies?: Have a local bring you supplies in exchange for repair work." << endl;
            break;
        case 4:
            playerFile << "Where Do You Get Your Supplies?: Corpo Execs supply you with stuff in exchange for your services." << endl;
            break;
        case 5:
            playerFile << "Where Do You Get Your Supplies?: You have backdoors into a few Corpo warehouses." << endl;
            break;
        case 6:
            playerFile << "Where Do You Get Your Supplies?: You hit the Night Markets and score deals whenever you can." << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            supplies();
            break;
    }

    system("CLS");

    yourEnemy();
}

void techie::yourEnemy()
{
    statsAndSkills ripperDoc;
    int menuIn;

    cout << " Who's Gunning For You?" << endl << endl
         << " 1) Combat Zone gangers who want you to work for them exclusively." << endl
         << " 2) Rival Tech trying to steal your customers." << endl
         << " 3) Corpos who want you to work for them exclusively." << endl
         << " 4) Large manufacturer trying to bring you down because your mods are a threat." << endl
         << " 5) Old clients who think you screwed them over." << endl
         << " 6) Rival Tech trying to beat you out for resources and parts." << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Who's Gunning For You?: Combat Zone gangers who want you to work for them exclusively." << endl << endl;
            break;
        case 2:
            playerFile << "Who's Gunning For You?: Rival Tech trying to steal your customers." << endl << endl;
            break;
        case 3:
            playerFile << "Who's Gunning For You?: Corpos who want you to work for them exclusively." << endl << endl;
            break;
        case 4:
            playerFile << "Who's Gunning For You?: Large manufacturer trying to bring you down because your mods are a threat." << endl << endl;
            break;
        case 5:
            playerFile << "Who's Gunning For You?: Old clients who think you screwed them over." << endl << endl;
            break;
        case 6:
            playerFile << "Who's Gunning For You?: Rival Tech trying to beat you out for resources and parts." << endl << endl;
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
