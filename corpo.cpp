#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include "corpo.h"
#include "statsAndSkills.h"

using namespace std;

void corpo::setLifepath(string runnerName, string saveFile)
{
    mercName = runnerName;

    myFile = saveFile;

    system("CLS");

    kindOf();
}

void corpo::kindOf()
{
    playerFile.open(myFile, ios::app);

    int menuIn;

    cout << " What Kind of Corp Do You Work For?" << endl << endl
         << " 1) Financial" << endl
         << " 2) Media and Communications" << endl
         << " 3) Cybertech and Medical Technologies" << endl
         << " 4) Pharmaceuticals and Biotech" << endl
         << " 5) Food, Clothing, or other General Consumables" << endl
         << " 6) Energy Production" << endl
         << " 7) Personal Electronics and Robotics" << endl
         << " 8) Corporate Services" << endl
         << " 9) Consumer Services" << endl
         << " 10) Real Estate and Construction" << endl
         << " 11) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What Kind of Corp Do You Work For?: Financial" << endl;
            break;
        case 2:
            playerFile << "What Kind of Corp Do You Work For?: Media and Communications" << endl;
            break;
        case 3:
            playerFile << "What Kind of Corp Do You Work For?: Cybertech and Medical Technologies" << endl;
            break;
        case 4:
            playerFile << "What Kind of Corp Do You Work For?: Pharmaceuticals and Biotech" << endl;
            break;
        case 5:
            playerFile << "What Kind of Corp Do You Work For?: Food, Clothing, or other General Consumables" << endl;
            break;
        case 6:
            playerFile << "What Kind of Corp Do You Work For?: Energy Production" << endl;
            break;
        case 7:
            playerFile << "What Kind of Corp Do You Work For?: Personal Electronics and Robotics" << endl;
            break;
        case 8:
            playerFile << "What Kind of Corp Do You Work For?: Corporate Services" << endl;
            break;
        case 9:
            playerFile << "What Kind of Corp Do You Work For?: Consumer Services" << endl;
            break;
        case 10:
            playerFile << "What Kind of Corp Do You Work For?: Real Estate and Construction" << endl;
            break;
        case 11:
            break;
        default:
            system("CLS");
            kindOf();
            break;
    }

    system("CLS");

    divison();
}

void corpo::divison()
{
    int menuIn;

    cout << " What Division Do You Work In?" << endl << endl
         << " 1) Procurement" << endl
         << " 2) Manufacturing" << endl
         << " 3) Research and Development" << endl
         << " 4) Human Resources" << endl
         << " 5) Public Affairs/Publicity/Advertising" << endl
         << " 6) Mergers and Acquisitions" << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What Division Do You Work In?: Procurement" << endl;
            break;
        case 2:
            playerFile << "What Division Do You Work In?: Manufacturing" << endl;
            break;
        case 3:
            playerFile << "What Division Do You Work In?: Research and Development" << endl;
            break;
        case 4:
            playerFile << "What Division Do You Work In?: Human Resources" << endl;
            break;
        case 5:
            playerFile << "What Division Do You Work In?: Public Affairs/Publicity/Advertising" << endl;
            break;
        case 6:
            playerFile << "What Division Do You Work In?: Mergers and Acquisitions" << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            divison();
            break;
    }

    system("CLS");

    morals();
}

void corpo::morals()
{
    int menuIn;

    cout << " How Good/Bad is Your Corp?" << endl << endl
         << " 1) Always working for good, fully supporting ethical practices." << endl
         << " 2) Operates as a fair and honest business all the time." << endl
         << " 3) Will occasionally slip and do unethical things, but it's rare." << endl
         << " 4) Willing to bend the rules to get what it needs." << endl
         << " 5) Ruthless and profit-centered, willing to do some bad things." << endl
         << " 6) Totally evil. Will engage in illegal, unethical business all the time." << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "How Good/Bad is Your Corp?: Always working for good, fully supporting ethical practices." << endl;
            break;
        case 2:
            playerFile << "How Good/Bad is Your Corp?: Operates as a fair and honest business all the time." << endl;
            break;
        case 3:
            playerFile << "How Good/Bad is Your Corp?: Will occasionally slip and do unethical things, but it's rare." << endl;
            break;
        case 4:
            playerFile << "How Good/Bad is Your Corp?: Willing to bend the rules to get what it needs." << endl;
            break;
        case 5:
            playerFile << "How Good/Bad is Your Corp?: Ruthless and profit-centered, willing to do some bad things." << endl;
            break;
        case 6:
            playerFile << "How Good/Bad is Your Corp?: Totally evil. Will engage in illegal, unethical business all the time." << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            morals();
            break;
    }

    system("CLS");

    localeBased();
}

void corpo::localeBased()
{
    int menuIn;

    cout << " Where is Your Corp based?" << endl << endl
         << " 1) One city" << endl
         << " 2) Several cities" << endl
         << " 3) Statewide" << endl
         << " 4) National" << endl
         << " 5) International, offices in a few major cities" << endl
         << " 6) International, offices everywhere" << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Where is Your Corp based?: One city" << endl;
            break;
        case 2:
            playerFile << "Where is Your Corp based?: Several cities" << endl;
            break;
        case 3:
            playerFile << "Where is Your Corp based?: Statewide" << endl;
            break;
        case 4:
            playerFile << "Where is Your Corp based?: National" << endl;
            break;
        case 5:
            playerFile << "Where is Your Corp based?: International, offices in a few major cities" << endl;
            break;
        case 6:
            playerFile << "Where is Your Corp based?: International, offices everywhere" << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            localeBased();
            break;
    }

    system("CLS");

    yourEnemy();
}

void corpo::yourEnemy()
{
    int menuIn;

    cout << " Who's Gunning for Your Group?" << endl << endl
         << " 1) Rival Corp in the same industry." << endl
         << " 2) Law enforcement is watching you." << endl
         << " 3) Local Media wants to bring you down." << endl
         << " 4) Different divisions in your own company are feuding with each other." << endl
         << " 5) Local government doesn't like your Corp." << endl
         << " 6) International Corps are eyeing you for a hostile takeover." << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Who's Gunning for Your Group?: Rival Corp in the same industry." << endl;
            break;
        case 2:
            playerFile << "Who's Gunning for Your Group?: Law enforcement is watching you." << endl;
            break;
        case 3:
            playerFile << "Who's Gunning for Your Group?: Local Media wants to bring you down." << endl;
            break;
        case 4:
            playerFile << "Who's Gunning for Your Group?: Different divisions in your own company are feuding with each other." << endl;
            break;
        case 5:
            playerFile << "Who's Gunning for Your Group?: Local government doesn't like your Corp." << endl;
            break;
        case 6:
            playerFile << "Who's Gunning for Your Group?: International Corps are eyeing you for a hostile takeover." << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            yourEnemy();
            break;
    }

    system("CLS");

    yourBoss();
}

void corpo::yourBoss()
{
    statsAndSkills ripperDoc;
    int menuIn;

    cout << " Current State with Your Boss?" << endl << endl
         << " 1) Your Boss mentors you but watch out for their enemies." << endl
         << " 2) Your Boss gives you a free hand and doesn't want to know what you're up to." << endl
         << " 3) Your Boss is a micromanager who tries to meddle in your work." << endl
         << " 4) Your Boss is a psycho whose unpredictable outbursts are offset by quiet paranoia." << endl
         << " 5) Your Boss is cool and watches your back against rivals." << endl
         << " 6) Your Boss is threatened by your meteoric rise and is planning to knife you." << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Current State with Your Boss?: Your Boss mentors you but watch out for their enemies." << endl << endl;
            break;
        case 2:
            playerFile << "Current State with Your Boss?: Your Boss gives you a free hand and doesn't want to know what you're up to." << endl << endl;
            break;
        case 3:
            playerFile << "Current State with Your Boss?: Your Boss is a micro manager who tries to meddle in your work." << endl << endl;
            break;
        case 4:
            playerFile << "Current State with Your Boss?: Your Boss is a psycho whose unpredictable outbursts are offset by quiet paranoia." << endl << endl;
            break;
        case 5:
            playerFile << "Current State with Your Boss?: Your Boss is cool and watches your back against rivals." << endl << endl;
            break;
        case 6:
            playerFile << "Current State with Your Boss?: Your Boss is threatened by your meteoric rise and is planning to knife you." << endl << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            yourBoss();
            break;
    }

    playerFile.close();

    system("CLS");

    ripperDoc.setStats(mercName, myFile);
}
