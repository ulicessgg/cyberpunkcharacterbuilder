#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include "media.h"
#include "statsAndSkills.h"

using namespace std;

void media::setLifepath(string runnerName, string saveFile)
{
    mercName = runnerName;

    myFile = saveFile;

    system("CLS");

    kindOf();
}

void media::kindOf()
{
    playerFile.open(myFile, ios::app);

    int menuIn;

    cout << " What Kind of Media are You?" << endl << endl
         << " 1) Blogger" << endl
         << " 2) Writer" << endl
         << " 3) Videographer" << endl
         << " 4) Documentarian" << endl
         << " 5) Investigative Reporter" << endl
         << " 6) Street Scribe" << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What Kind of Media are You?: Blogger" << endl;
            break;
        case 2:
            playerFile << "What Kind of Media are You?: Writer" << endl;
            break;
        case 3:
            playerFile << "What Kind of Media are You?: Videographer" << endl;
            break;
        case 4:
            playerFile << "What Kind of Media are You?: Documentarian" << endl;
            break;
        case 5:
            playerFile << "What Kind of Media are You?: Investigative Reporter" << endl;
            break;
        case 6:
            playerFile << "What Kind of Media are You?: Street Scribe" << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            kindOf();
            break;
    }

    system("CLS");

    workImpact();
}

void media::workImpact()
{
    int menuIn;

    cout << " How Does Your Work Reach the Public?" << endl << endl
         << " 1) Monthly magazine" << endl
         << " 2) Blog" << endl
         << " 3) Mainstream vid feed" << endl
         << " 4) News channel" << endl
         << " 5) \"Book\" sales" << endl
         << " 6) Screamsheets" << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "How Does Your Work Reach the Public?: Monthly magazine" << endl;
            break;
        case 2:
            playerFile << "How Does Your Work Reach the Public?: Blog" << endl;
            break;
        case 3:
            playerFile << "How Does Your Work Reach the Public?: Mainstream vid feed" << endl;
            break;
        case 4:
            playerFile << "How Does Your Work Reach the Public?: News channel" << endl;
            break;
        case 5:
            playerFile << "How Does Your Work Reach the Public?: \"Book\" sales" << endl;
            break;
        case 6:
            playerFile << "How Does Your Work Reach the Public?: Screamsheets" << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            workImpact();
            break;
    }

    system("CLS");

    ethics();
}

void media::ethics()
{
    int menuIn;

    cout << " How Ethical are You?" << endl << endl
         << " 1) Fair, honest reporting, strong ethical practices. You only report the verifiable truth." << endl
         << " 2) Fair and honest reporting, but willing to go on hearsay and rumor if that's what it takes." << endl
         << " 3) Will occasionally slip and do unethical things, but it's rare. You have some standards." << endl
         << " 4) Willing to bend any rules to get the bad guys. But only the bad guys." << endl
         << " 5) Ruthless and determined to make it big, even if it means breaking the law. You're a muckraker." << endl
         << " 6) Totally corrupt. You take bribes, engage in illegal, unethical reporting all the time. Your pen is for hire to the highest bidder." << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "How Ethical are You?: Fair, honest reporting, strong ethical practices. You only report the verifiable truth." << endl;
            break;
        case 2:
            playerFile << "How Ethical are You?: Fair and honest reporting, but willing to go on hearsay and rumor if that's what it takes." << endl;
            break;
        case 3:
            playerFile << "How Ethical are You?: Will occasionally slip and do unethical things, but it's rare. You have some standards." << endl;
            break;
        case 4:
            playerFile << "How Ethical are You?: Willing to bend any rules to get the bad guys. But only the bad guys." << endl;
            break;
        case 5:
            playerFile << "How Ethical are You?: Ruthless and determined to make it big, even if it means breaking the law. You're a muckraker." << endl;
            break;
        case 6:
            playerFile << "How Ethical are You?: Totally corrupt. You take bribes, engage in illegal, unethical reporting all the time. Your pen is for hire to the highest bidder." << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            ethics();
            break;
    }

    system("CLS");

    storiesTold();
}

void media::storiesTold()
{
    statsAndSkills ripperDoc;
    int menuIn;

    cout << " What Types of Stories Do You Want to Tell?" << endl << endl
         << " 1) Political Intrigue" << endl
         << " 2) Ecological Impact" << endl
         << " 3) Celebrity News" << endl
         << " 4) Corpo Takedowns" << endl
         << " 5) Editorials" << endl
         << " 6) Propaganda" << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What Types of Stories Do You Want to Tell?: Political Intrigue" << endl << endl;
            break;
        case 2:
            playerFile << "What Types of Stories Do You Want to Tell?: Ecological Impact" << endl << endl;
            break;
        case 3:
            playerFile << "What Types of Stories Do You Want to Tell?: Celebrity News" << endl << endl;
            break;
        case 4:
            playerFile << "What Types of Stories Do You Want to Tell?: Corpo Takedowns" << endl << endl;
            break;
        case 5:
            playerFile << "What Types of Stories Do You Want to Tell?: Editorials" << endl << endl;
            break;
        case 6:
            playerFile << "What Types of Stories Do You Want to Tell?: Propaganda" << endl << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            storiesTold();
            break;
    }

    playerFile.close();

    system("CLS");

    ripperDoc.setStats(mercName, myFile);
}
