#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include "netrunner.h"
#include "statsAndSkills.h"

using namespace std;

void netrunner::setLifepath(string runnerName, string saveFile)
{
    mercName = runnerName;

    myFile = saveFile;

    system("CLS");

    kindOf();
}

void netrunner::kindOf()
{
    playerFile.open(myFile, ios::app);

    int menuIn;
    string choice;

    cout << " What Kind of Runner are You?" << endl << endl
         << " 1) Freelancer who will hack for hire." << endl
         << " 2) Corpo \"clone runner\" who hacks for the Man." << endl
         << " 3) Hacktivist interested in cracking systems and exposing bad guys." << endl
         << " 4) Just like to crack systems for the fun of it." << endl
         << " 5) Part of a regular teams of freelancers." << endl
         << " 6) Hack for a Media, politico, or Badge who hires you as needed." << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What Kind of Runner are You?: Freelancer who will hack for hire." << endl;
            break;
        case 2:
            playerFile << "What Kind of Runner are You?: Corpo \"clone runner\" who hacks for the Man." << endl;
            break;
        case 3:
            playerFile << "What Kind of Runner are You?: Hacktivist interested in cracking systems and exposing bad guys." << endl;
            break;
        case 4:
            playerFile << "What Kind of Runner are You?: Just like to crack systems for the fun of it." << endl;
            break;
        case 5:
            playerFile << "What Kind of Runner are You?: Part of a regular teams of freelancers." << endl;
            break;
        case 6:
            playerFile << "What Kind of Runner are You?: Hack for a Media, politico, or Badge who hires you as needed." << endl;
            break;
        case 7:
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

void netrunner::workspace()
{
    int menuIn;

    cout << " What's Your Workspace like?" << endl << endl
         << " 1) There are screens everywhere." << endl
         << " 2) It looks better in Virtuality, you swear." << endl
         << " 3) It's a filthy bed covered in wires." << endl
         << " 4) Corpo, modular, and utilitarian." << endl
         << " 5) Minimalist, clean, and organized." << endl
         << " 6) It's taken over your entire living space." << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What's Your Workspace like?: There are screens everywhere." << endl;
            break;
        case 2:
            playerFile << "What's Your Workspace like?: It looks better in Virtuality, you swear." << endl;
            break;
        case 3:
            playerFile << "What's Your Workspace like?: It's a filthy bed covered in wires." << endl;
            break;
        case 4:
            playerFile << "What's Your Workspace like?: Corpo, modular, and utilitarian." << endl;
            break;
        case 5:
            playerFile << "What's Your Workspace like?: Minimalist, clean, and organized." << endl;
            break;
        case 6:
            playerFile << "What's Your Workspace like?: It's taken over your entire living space." << endl;
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

void netrunner::partner()
{
    int menuIn;

    cout << " If You Have a Partner, Who are They?" << endl << endl
         << " 1) Family Member" << endl
         << " 2) Old Friend" << endl
         << " 3) Possible romantic partner as well" << endl
         << " 4) Secret Partner who might be a rouge AI. Might." << endl
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
            playerFile << "If You Have a Partner, Who are They?: Secret Partner who might be a rouge AI. Might." << endl;
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

void netrunner::clients()
{
    int menuIn;

    cout << " Who are Some of Your Other Clients?" << endl << endl
         << " 1) Local Fixers who send you clients." << endl
         << " 2) Local gangers whop also protect your work area while you sweep for NET threats." << endl
         << " 3) Corpo Execs who use you for \"black project\" work." << endl
         << " 4) Local Solos or other combat types who use you to keep their personal systems secure." << endl
         << " 5) Local Nomads and Fixers who use you to keep their family systems secure." << endl
         << " 6) You work for yourself and sell whatever data you find on the NET." << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Who are Some of Your Other Clients?: Local Fixers who send you clients." << endl;
            break;
        case 2:
            playerFile << "Who are Some of Your Other Clients?: Local gangers whop also protect your work area while you sweep for NET threats." << endl;
            break;
        case 3:
            playerFile << "Who are Some of Your Other Clients?: Corpo Execs who use you for \"black project\" work." << endl;
            break;
        case 4:
            playerFile << "Who are Some of Your Other Clients?: Local Solos or other combat types who use you to keep their personal systems secure." << endl;
            break;
        case 5:
            playerFile << "Who are Some of Your Other Clients?: Local Nomads and Fixers who use you to keep their family systems secure." << endl;
            break;
        case 6:
            playerFile << "Who are Some of Your Other Clients?: You work for yourself and sell whatever data you find on the NET." << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            clients();
            break;
    }

    system("CLS");

    daemonSource();
}

void netrunner::daemonSource()
{
    int menuIn;

    cout << " Where Do You Get Your Programs?" << endl << endl
         << " 1) Dig around in old abandoned City Zones." << endl
         << " 2) Steal them from other Netrunners you brain-burn." << endl
         << " 3) Have a local Fixer supply programs in exchange for hack work." << endl
         << " 4) Corpo Execs supply you with programs in exchange for your services." << endl
         << " 5) You have backdoors into a few Corpo warehouses." << endl
         << " 6) You hit the Night Markets and score programs whenever you can." << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Where Do You Get Your Programs?: Dig around in old abandoned City Zones." << endl;
            break;
        case 2:
            playerFile << "Where Do You Get Your Programs?: Steal them from other Netrunners you brain-burn." << endl;
            break;
        case 3:
            playerFile << "Where Do You Get Your Programs?: Have a local Fixer supply programs in exchange for hack work." << endl;
            break;
        case 4:
            playerFile << "Where Do You Get Your Programs?: Corpo Execs supply you with programs in exchange for your services." << endl;
            break;
        case 5:
            playerFile << "Where Do You Get Your Programs?: You have backdoors into a few Corpo warehouses." << endl;
            break;
        case 6:
            playerFile << "Where Do You Get Your Programs?: You hit the Night Markets and score programs whenever you can." << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            daemonSource();
            break;
    }

    system("CLS");

    yourEnemy();
}

void netrunner::yourEnemy()
{
    statsAndSkills ripperDoc;
    int menuIn;

    cout << " Who's Gunning for You?" << endl << endl
         << " 1) You think it might be a rouge AI or a NET Ghost. Either way, it's bad news." << endl
         << " 2) Rival Netrunners who just don't like you." << endl
         << " 3) Corpos who want you to work for them exclusively." << endl
         << " 4) Badges who consider you an illegal \"black hat\" and want to bust you." << endl
         << " 5) Old clients who think you screwed them over." << endl
         << " 6) Fixer or another client who wants your services exclusively." << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Who's Gunning for You?: You think it might be a rogue AI or a NET Ghost. Either way, it's bad news." << endl << endl;
            break;
        case 2:
            playerFile << "Who's Gunning for You?: Rival Netrunners who just don't like you." << endl << endl;
            break;
        case 3:
            playerFile << "Who's Gunning for You?: Corpos who want you to work for them exclusively." << endl << endl;
            break;
        case 4:
            playerFile << "Who's Gunning for You?: Badges who consider you an illegal \"black hat\" and want to bust you." << endl << endl;
            break;
        case 5:
            playerFile << "Who's Gunning for You?: Old clients who think you screwed them over." << endl << endl;
            break;
        case 6:
            playerFile << "Who's Gunning for You?: Fixer or another client who wants your services exclusively." << endl << endl;
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
