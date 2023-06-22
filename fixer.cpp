#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include "fixer.h"
#include "statsAndSkills.h"

using namespace std;

void fixer::setLifepath(string runnerName, string saveFile)
{
    mercName = runnerName;

    myFile = saveFile;

    system("CLS");

    kindOf();
}

void fixer::kindOf()
{
    playerFile.open(myFile, ios::app);

    int menuIn;
    string choice;

    cout << " What Kind of Fixer are You?" << endl << endl
         << " 1) Broker deals between rival gangs." << endl
         << " 2) Procure rare or atypical resources for exclusive clientele." << endl
         << " 3) Specialize in brokering Solo and Tech services as an agent." << endl
         << " 4) Supply a regular resource for Night Markets, like food, medicines, or drugs." << endl
         << " 5) Procure highly illegal resources, like street drugs or milspec weapons." << endl
         << " 6) Supply resources for Techs and Medtechs, like parts and medical supplies." << endl
         << " 7) Operate several successful Night Markets, although not as owner." << endl
         << " 8) Broker use contracts for heavy machinery, military vehicles, and aircraft." << endl
         << " 9) Broker deals as a fence for scavengers raiding Corps and Combat Zones." << endl
         << " 10) Act as an exclusive agent for a Media, Rockerboy, or a Nomad Pack." << endl
         << " 11) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What Kind of Fixer are You?: Broker deals between rival gangs." << endl;
            break;
        case 2:
            playerFile << "What Kind of Fixer are You?: Procure rare or atypical resources for exclusive clientele." << endl;
            break;
        case 3:
            playerFile << "What Kind of Fixer are You?: Specialize in brokering Solo and Tech services as an agent." << endl;
            break;
        case 4:
            playerFile << "What Kind of Fixer are You?: Supply a regular resource for Night Markets, like food, medicines, or drugs." << endl;
            break;
        case 5:
            playerFile << "What Kind of Fixer are You?: Procure highly illegal resources, like street drugs or milspec weapons." << endl;
            break;
        case 6:
            playerFile << "What Kind of Fixer are You?: Supply resources for Techs and Medtechs, like parts and medical supplies." << endl;
            break;
        case 7:
            playerFile << "What Kind of Fixer are You?: Operate several successful Night Markets, although not as owner." << endl;
            break;
        case 8:
            playerFile << "What Kind of Fixer are You?: Broker use contracts for heavy machinery, military vehicles, and aircrafts." << endl;
            break;
        case 9:
            playerFile << "What Kind of Fixer are You?: Broker deals as a fence for scavengers raiding Corps and Combat Zones." << endl;
            break;
        case 10:
            playerFile << "What Kind of Fixer are You?: Act as an exclusive agent for a Media, Rockerboy, or a Nomad Pack." << endl;
            break;
        case 11:
            break;
        default:
            system("CLS");
            kindOf();
            break;
    }

    system("CLS");

    cout << " Got a Partner, or Work Alone?" << endl
    << " " << mercName << ": ";
    cin >> choice;

    playerFile << "Got a Partner, or Work Alone?: " << choice << endl;

    system("CLS");

    if(choice== "Yes" || choice == "yEs" || choice== "yeS" || choice == "yES" || choice== "YEs" || choice == "YES" || choice== "YeS" || choice == "yes")
    {
        partner();
    }
    else if(choice== "No" || choice == "nO" || choice== "NO" || choice == "no")
    {
        office();
    }
    else
    {
        kindOf();
    }
}

void fixer::office()
{
    int menuIn;

    cout << " What’s Your “Office” Like?" << endl << endl
         << " 1) You don’t have one. You like to keep it mobile." << endl
         << " 2) A booth in a local bar." << endl
         << " 3) All Data Pool messages and anonymous dead drops." << endl
         << " 4) Spare room in a warehouse, shop, or clinic." << endl
         << " 5) An otherwise abandoned building." << endl
         << " 6) The lobby of a cube hotel." << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What’s Your “Office” Like?: You don’t have one. You like to keep it mobile." << endl;
            break;
        case 2:
            playerFile << "What’s Your “Office” Like?: A booth in a local bar." << endl;
            break;
        case 3:
            playerFile << "What’s Your “Office” Like?: All Data Pool messages and anonymous dead drops." << endl;
            break;
        case 4:
            playerFile << "What’s Your “Office” Like?: Spare room in a warehouse, shop, or clinic." << endl;
            break;
        case 5:
            playerFile << "What’s Your “Office” Like?: An otherwise abandoned building." << endl;
            break;
        case 6:
            playerFile << "What’s Your “Office” Like?: The lobby of a cube hotel." << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            office();
            break;
    }

    system("CLS");

    sideClients();
}

void fixer::partner()
{
    int menuIn;

    cout << " Got a Partner? Who?" << endl << endl
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
            playerFile << "Got a Partner? Who?: amily Member" << endl;
            break;
        case 2:
            playerFile << "Got a Partner? Who?: Old Friend" << endl;
            break;
        case 3:
            playerFile << "Got a Partner? Who?: Possible romantic partner as well" << endl;
            break;
        case 4:
            playerFile << "Got a Partner? Who?: Mentor" << endl;
            break;
        case 5:
            playerFile << "Got a Partner? Who?: Secret partner with mob/gang connections" << endl;
            break;
        case 6:
            playerFile << "Got a Partner? Who?: Secret partner with Corpo connections" << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            partner();
            break;
    }

    system("CLS");

    office();
}

void fixer::sideClients()
{
    int menuIn;

    cout << " Who are Your Side Clients?" << endl << endl
         << " 1) Local Rockerboys or Medias who use you to get them the gigs or contacts." << endl
         << " 2) Local gangers whop also protect your work area or home." << endl
         << " 3) Corpo Execs who use you for \"black project\" work." << endl
         << " 4) Local Solos or other combat types who use you to get them jons or contacts." << endl
         << " 5) Local Nomads and Fixers to set up transactions or deals." << endl
         << " 6) Local politicos or Execs who depend on your for finding out information." << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Who are Your Side Clients?: Local Rockerboys or Medias who use you to get them the gigs or contacts." << endl;
            break;
        case 2:
            playerFile << "Who are Your Side Clients?: Local gangers whop also protect your work area or home." << endl;
            break;
        case 3:
            playerFile << "Who are Your Side Clients?: Corpo Execs who use you for \"black project\" work." << endl;
            break;
        case 4:
            playerFile << "Who are Your Side Clients?: Local Solos or other combat types who use you to get them jons or contacts." << endl;
            break;
        case 5:
            playerFile << "Who are Your Side Clients?: Local Nomads and Fixers to set up transactions or deals." << endl;
            break;
        case 6:
            playerFile << "Who are Your Side Clients?: Local politicos or Execs who depend on your for finding out information." << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            sideClients();
            break;
    }

    system("CLS");

    yourEnemy();
}

void fixer::yourEnemy()
{
    statsAndSkills ripperDoc;
    int menuIn;

    cout << " Who’s Gunning for You?" << endl << endl
         << " 1) Combat Zone gangers who want you to work for them exclusively." << endl
         << " 2) Rival Fixers trying to steal your clients." << endl
         << " 3) Corpos who want you to work for them exclusively." << endl
         << " 4) Enemy of a Former client who wants to clean up \"loose ends\"--like you." << endl
         << " 5) Old client who thinks you screwed them over." << endl
         << " 6) Rival Fixer trying to beat you out for resources and parts." << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Who’s Gunning for You?: Combat Zone gangers who want you to work for them exclusively." << endl << endl;
            break;
        case 2:
            playerFile << "Who’s Gunning for You?: Rival Fixers trying to steal your clients." << endl << endl;
            break;
        case 3:
            playerFile << "Who’s Gunning for You?: Corpos who want you to work for them exclusively." << endl << endl;
            break;
        case 4:
            playerFile << "Who’s Gunning for You?: Enemy of a Former client who wants to clean up \"loose ends\"--like you." << endl << endl;
            break;
        case 5:
            playerFile << "Who’s Gunning for You?: Old client who thinks you screwed them over." << endl << endl;
            break;
        case 6:
            playerFile << "Who’s Gunning for You?: Rival Fixer trying to beat you out for resources and parts." << endl << endl;
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
