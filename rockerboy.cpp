#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include "rockerboy.h"
#include "statsAndSkills.h"

using namespace std;

void rockerboy::setLifepath(string runnerName, string saveFile)
{
    mercName = runnerName;

    myFile = saveFile;

    system("CLS");

    kindOf();
}

void rockerboy::kindOf()
{
    playerFile.open(myFile, ios::app);

    int menuIn;
    string choice;
    string type;

    cout << " What Kind of Rockerboy are You?" << endl << endl
         << " 1) Musician" << endl
         << " 2) Slam Poet" << endl
         << " 3) Street Artist" << endl
         << " 4) Performance Artist" << endl
         << " 5) Comedian" << endl
         << " 6) Orator" << endl
         << " 7) Politico" << endl
         << " 8) Rap Artist" << endl
         << " 9) DJ" << endl
         << " 10) Idoru" << endl
         << " 11) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What Kind of Rockerboy are You?What Kind of Rockerboy are You?: Musician" << endl;
            break;
        case 2:
            playerFile << "What Kind of Rockerboy are You?What Kind of Rockerboy are You?: Slam Poet" << endl;
            break;
        case 3:
            playerFile << "What Kind of Rockerboy are You?What Kind of Rockerboy are You?: Street Artist" << endl;
            break;
        case 4:
            playerFile << "What Kind of Rockerboy are You?What Kind of Rockerboy are You?: Performance Artist" << endl;
            break;
        case 5:
            playerFile << "What Kind of Rockerboy are You?What Kind of Rockerboy are You?: Comedian" << endl;
            break;
        case 6:
            playerFile << "What Kind of Rockerboy are You?What Kind of Rockerboy are You?: Orator" << endl;
            break;
        case 7:
            playerFile << "What Kind of Rockerboy are You?What Kind of Rockerboy are You?: Politico" << endl;
            break;
        case 8:
            playerFile << "What Kind of Rockerboy are You?What Kind of Rockerboy are You?: Rap Artist" << endl;
            break;
        case 9:
            playerFile << "What Kind of Rockerboy are You?What Kind of Rockerboy are You?: DJ" << endl;
            break;
        case 10:
            playerFile << "What Kind of Rockerboy are You?What Kind of Rockerboy are You?: Idoru" << endl;
            break;
        case 11:
            break;
        default:
            system("CLS");
            kindOf();
            break;
    }

    system("CLS");

    cout << " Are you in a Group or a Solo Act?" << endl
    << " " << mercName << ": ";
    cin >> choice;

    playerFile << "Are you in a Group or a Solo Act?: " << choice << endl;

    if(choice == "Group" || choice == "group")
    {
        gigLocal();
    }
    else if(choice == "Solo" || choice == "solo")
    {
        cout << " Were You Once in a Group?" << endl
        << " " << mercName << ": ";
        cin >> type;

        playerFile << "Were You Once in a Group?: " << type << endl;

        system("CLS");

        if(type== "Yes" || type == "yEs" || type== "yeS" || type == "yES" || type== "YEs" || type == "YES" || type== "YeS" || type == "yes")
        {
            whyLeave();
        }
        else if(type== "No" || type == "nO" || type== "NO" || type == "no")
        {
            gigLocal();
        }
        else
        {
            kindOf();
        }
    }
    else
    {
        system("CLS");
        kindOf();
    }
}

void rockerboy::whyLeave()
{
    int menuIn;

    cout << " Why Did You Leave?" << endl << endl
         << " 1) You were a jerk and the rest of the group voted you out." << endl
         << " 2) You got caught sleeping around with another member's mainline." << endl
         << " 3) The rest of the group was killed in a tragic \"accident\"." << endl
         << " 4) The rest of the group was murdered or otherwise broken up by external enemies." << endl
         << " 5) The group broke up over \"creative differences\"." << endl
         << " 6) I decided to go solo." << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Why Did You Leave?: You were a jerk and the rest of the group voted you out." << endl;
            break;
        case 2:
            playerFile << "Why Did You Leave?: You got caught sleeping around with another member's mainline." << endl;
            break;
        case 3:
            playerFile << "Why Did You Leave?: The rest of the group was killed in a tragic \"accident\"." << endl;
            break;
        case 4:
            playerFile << "Why Did You Leave?: The rest of the group was murdered or otherwise broken up by external enemies." << endl;
            break;
        case 5:
            playerFile << "Why Did You Leave?: The group broke up over \"creative differences\"." << endl;
            break;
        case 6:
            playerFile << "Why Did You Leave?: I decided to go solo." << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            whyLeave();
            break;
    }

    system("CLS");

    gigLocal();
}

void rockerboy::gigLocal()
{
    int menuIn;

    cout << " Where Do You perform?" << endl << endl
         << " 1) Alternative Cafes" << endl
         << " 2) Private Clubs" << endl
         << " 3) Seedy Dive Bars" << endl
         << " 4) Guerrilla Performances" << endl
         << " 5) Nightclubs Around the City" << endl
         << " 6) On the Data Pool" << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Where Do You perform?: Alternative Cafes" << endl;
            break;
        case 2:
            playerFile << "Where Do You perform?: Private Clubs" << endl;
            break;
        case 3:
            playerFile << "Where Do You perform?: Seedy Dive Bars" << endl;
            break;
        case 4:
            playerFile << "Where Do You perform?: Guerrilla Performances" << endl;
            break;
        case 5:
            playerFile << "Where Do You perform?: Nightclubs Around the City" << endl;
            break;
        case 6:
            playerFile << "Where Do You perform?: On the Data Pool" << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            gigLocal();
            break;
    }

    system("CLS");

    yourEnemy();
}

void rockerboy::yourEnemy()
{
    statsAndSkills ripperDoc;
    int menuIn;

    cout << " Who's gunning for you/your group?" << endl << endl
         << " 1) Old group member who thinks you did them dirty." << endl
         << " 2) Rival group or artist trying to steal market share." << endl
         << " 3) Corpo enemies who don't like your message." << endl
         << " 4) Critic or other \"influencer\" trying to bring you down." << endl
         << " 5) Old media star who feels threatened by your rising fame." << endl
         << " 6) Romantic interest or media figure who wants revenge for personal reasons." << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Who's gunning for you/your group?: Old group member who thinks you did them dirty." << endl << endl;
            break;
        case 2:
            playerFile << "Who's gunning for you/your group?: Rival group or artist trying to steal market share." << endl << endl;
            break;
        case 3:
            playerFile << "Who's gunning for you/your group?: Corpo enemies who don't like your message." << endl << endl;
            break;
        case 4:
            playerFile << "Who's gunning for you/your group?: Critic or other \"influencer\" trying to bring you down." << endl << endl;
            break;
        case 5:
            playerFile << "Who's gunning for you/your group?: Old media star who feels threatened by your rising fame." << endl << endl;
            break;
        case 6:
            playerFile << "Who's gunning for you/your group?: Romantic interest or media figure who wants revenge for personal reasons." << endl << endl;
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
