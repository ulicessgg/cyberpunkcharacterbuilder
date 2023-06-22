#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include "nomad.h"
#include "statsAndSkills.h"

using namespace std;

void nomad::setLifepath(string runnerName, string saveFile)
{
    mercName = runnerName;

    myFile = saveFile;

    system("CLS");

    packSize();
}

void nomad::packSize()
{
    playerFile.open(myFile, ios::app);

    int menuIn;
    string choice;

    cout << " How Big is Your Pack?" << endl << endl
         << " 1) A single extended tribe or family" << endl
         << " 2) A couple dozen members" << endl
         << " 3) Forty or Fifty members" << endl
         << " 4) A hundred or more members" << endl
         << " 5) A Blood family" << endl
         << " 6) An Affiliated Family" << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "How Big is Your Pack?: A single extended tribe or family" << endl;
            break;
        case 2:
            playerFile << "How Big is Your Pack?: A couple dozen members" << endl;
            break;
        case 3:
            playerFile << "How Big is Your Pack?: Forty or Fifty members" << endl;
            break;
        case 4:
            playerFile << "How Big is Your Pack?: A hundred or more members" << endl;
            break;
        case 5:
            playerFile << "How Big is Your Pack?: A Blood family" << endl;
            break;
        case 6:
            playerFile << "How Big is Your Pack?: An Affiliated Family" << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            packSize();
            break;
    }

    system("CLS");

    cout << " Is Your Pack Based on Land, Air, or Sea?" << endl
    << " " << mercName << ": ";
    cin >> choice;

    playerFile << " Is Your Pack Based on Land, Air, or Sea?: " << choice << endl;

    system("CLS");

    if(choice == "Land")
    {
        landClan();
    }
    else if(choice == "Air")
    {
        airClan();
    }
    else if(choice == "Sea")
    {
        seaClan();
    }
    else
    {
        packSize();
    }
}

void nomad::landClan()
{
    int menuIn;

    cout << " What Do They Do?" << endl << endl
         << " 1) Gogang" << endl
         << " 2) Passenger transport" << endl
         << " 3) Chautauqua/school" << endl
         << " 4) Traveling show/carnival" << endl
         << " 5) Migrant farmers" << endl
         << " 6) Cargo transport" << endl
         << " 7) Shipment protection" << endl
         << " 8) Smuggling" << endl
         << " 9) Mercenary army" << endl
         << " 10) Construction work gang" << endl
         << " 11) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What Do They Do?: Gogang" << endl;
            break;
        case 2:
            playerFile << "What Do They Do?: Passenger transport" << endl;
            break;
        case 3:
            playerFile << "What Do They Do?: Chautauqua/school" << endl;
            break;
        case 4:
            playerFile << "What Do They Do?: Traveling show/carnival" << endl;
            break;
        case 5:
            playerFile << "What Do They Do?: Migrant farmers" << endl;
            break;
        case 6:
            playerFile << "What Do They Do?: Cargo transport" << endl;
            break;
        case 7:
            playerFile << "What Do They Do?: Shipment protection" << endl;
            break;
        case 8:
            playerFile << "What Do They Do?: Smuggling" << endl;
            break;
        case 9:
            playerFile << "What Do They Do?: Mercenary army" << endl;
            break;
        case 10:
            playerFile << "What Do They Do?: Construction work gang" << endl;
            break;
        case 11:
            break;
        default:
            system("CLS");
            landClan();
            break;
    }

    system("CLS");

    yourJob();
}

void nomad::airClan()
{
    int menuIn;

    cout << " What Do They Do?" << endl << endl
         << " 1) Air piracy" << endl
         << " 2) Cargo transport" << endl
         << " 3) Passenger transport" << endl
         << " 4) Aircraft protection" << endl
         << " 5) Smuggling" << endl
         << " 6) Combat support" << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What Do They Do?: Air piracy" << endl;
            break;
        case 2:
            playerFile << "What Do They Do?: Cargo transport" << endl;
            break;
        case 3:
            playerFile << "What Do They Do?: Passenger transport" << endl;
            break;
        case 4:
            playerFile << "What Do They Do?: Aircraft protection" << endl;
            break;
        case 5:
            playerFile << "What Do They Do?: Smuggling" << endl;
            break;
        case 6:
            playerFile << "What Do They Do?: Combat support" << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            airClan();
            break;
    }

    system("CLS");

    yourJob();
}

void nomad::seaClan()
{
    int menuIn;

    cout << " What Do They Do?" << endl << endl
         << " 1) Piracy" << endl
         << " 2) Cargo transport" << endl
         << " 3) Passenger transport" << endl
         << " 4) Smuggling" << endl
         << " 5) Combat support" << endl
         << " 6) Submarine warfare" << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What Do They Do?: Piracy" << endl;
            break;
        case 2:
            playerFile << "What Do They Do?: Cargo transport" << endl;
            break;
        case 3:
            playerFile << "What Do They Do?: Passenger transport" << endl;
            break;
        case 4:
            playerFile << "What Do They Do?: Smuggling" << endl;
            break;
        case 5:
            playerFile << "What Do They Do?: Combat support" << endl;
            break;
        case 6:
            playerFile << "What Do They Do?: Submarine warfare" << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            seaClan();
            break;
    }

    system("CLS");

    yourJob();
}

void nomad::yourJob()
{
    int menuIn;

    cout << " What Do You Do for Your Pack?" << endl << endl
         << " 1) Scout" << endl
         << " 2) Outrider" << endl
         << " 3) Transport pilot/driver" << endl
         << " 4) Loadmaster" << endl
         << " 5) Safe smuggler" << endl
         << " 6) Procurement" << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What Do You Do for Your Pack?: Scout" << endl;
            break;
        case 2:
            playerFile << "What Do You Do for Your Pack?: Outrider" << endl;
            break;
        case 3:
            playerFile << "What Do You Do for Your Pack?: Transport pilot/driver" << endl;
            break;
        case 4:
            playerFile << "What Do You Do for Your Pack?: Loadmaster" << endl;
            break;
        case 5:
            playerFile << "What Do You Do for Your Pack?: Safe smuggler" << endl;
            break;
        case 6:
            playerFile << "What Do You Do for Your Pack?: Procurement" << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            yourJob();
            break;
    }

    system("CLS");

    packPhilosophy();
}

void nomad::packPhilosophy()
{
    int menuIn;

    cout << " What’s Your Pack’s Overall Philosophy?" << endl << endl
         << " 1) Always working for good; your Pack accepts others, just wants to get along." << endl
         << " 2) It’s more like a family business. Operates as a fair and honest concern." << endl
         << " 3) Will occasionally slip and do unethical things. but it’s rare." << endl
         << " 4) Willing to bend the rules whenever they get in the way to get what the Pack needs." << endl
         << " 5) Ruthless and self-centered, willing to do some bad things if it will get the Pack ahead." << endl
         << " 6) Totally evil. You rage you and down the highways, killing, looting, and just terrorizing everyone." << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What’s Your Pack’s Overall Philosophy?: Always working for good; your Pack accepts others, just wants to get along." << endl;
            break;
        case 2:
            playerFile << "What’s Your Pack’s Overall Philosophy?: It’s more like a family business. Operates as a fair and honest concern." << endl;
            break;
        case 3:
            playerFile << "What’s Your Pack’s Overall Philosophy?: Will occasionally slip and do unethical things. but it’s rare." << endl;
            break;
        case 4:
            playerFile << "What’s Your Pack’s Overall Philosophy?: Willing to bend the rules whenever they get in the way to get what the pack needs." << endl;
            break;
        case 5:
            playerFile << "What’s Your Pack’s Overall Philosophy?: Ruthless and self-centered, willing to do some bad things if it will get the pack ahead." << endl;
            break;
        case 6:
            playerFile << "What’s Your Pack’s Overall Philosophy?: Totally evil. You rage you and down the highways, killing, looting, and just terrorizing everyone." << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            packPhilosophy();
            break;
    }

    system("CLS");

    packEnemy();
}

void nomad::packEnemy()
{
    statsAndSkills ripperDoc;
    int menuIn;

    cout << " Who’s Gunning for Your Pack?" << endl << endl
         << " 1) Organized Crime" << endl
         << " 2) Boostergangs" << endl
         << " 3) Drug Runners" << endl
         << " 4) Dirty Politicians" << endl
         << " 5) Rival Packs in the same businesses" << endl
         << " 6) Dirty Cops" << endl
         << " 7) Quit" << endl << endl
         << " " << mercName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Who’s Gunning for Your Pack?: Organized Crime" << endl << endl;
            break;
        case 2:
            playerFile << "Who’s Gunning for Your Pack?: Boostergangs" << endl << endl;
            break;
        case 3:
            playerFile << "Who’s Gunning for Your Pack?: Drug Runners" << endl << endl;
            break;
        case 4:
            playerFile << "Who’s Gunning for Your Pack?: Dirty Politicians" << endl << endl;
            break;
        case 5:
            playerFile << "Who’s Gunning for Your Pack?: Rival Packs in the same businesses" << endl << endl;
            break;
        case 6:
            playerFile << "Who’s Gunning for Your Pack?: Dirty Cops" << endl << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            packEnemy();
            break;
    }

    playerFile.close();

    system("CLS");

    ripperDoc.setStats(mercName, myFile);
}
