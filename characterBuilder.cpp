#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include "characterBuilder.h"
#include "characterLifepath.h"

using namespace std;

void characterBuilder::mainMenu()
{
    int menuIn;

    cout << " Welcome. From the following enter the corresponding number for that option." << endl << endl
         << " 1) Create a Character" << endl
         << " 2) Settings" << endl
         << " 3) Quit" << endl << endl
         << " User: " ;

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            newCharacter();
            break;
        case 2:
            changeSettings();
            system("CLS");
            mainMenu();
            break;
        case 3:
            break;
        default:
            system("CLS");
            mainMenu();
            break;
    }
}

void characterBuilder::setName()
{
    bool nameSelect = false;
    string tempName;
    string userChoice;

    system("CLS");

    while(nameSelect == false)
    {
        cout << " Enter your characters name." << endl << endl
             << " User: " ;
        cin >> tempName;

        cout << endl << " ATTENTION! IF YOU ARE SATISFIED ENTER 'Yes'! IF NOT PLEASE ENTER 'No'." << endl
             << endl << " !THIS IS YOUR ONE AND ONLY TIME TO CHANGE YOUR NAME!" << endl << endl
             << " User: " ;
        cin >> userChoice;                                                                                       // User input

        if(userChoice== "Yes" || userChoice == "yEs" || userChoice== "yeS" || userChoice == "yES" || userChoice== "YEs" || userChoice == "YES" || userChoice== "YeS" || userChoice == "yes")
        {
            nameSelect = true;
        }
        else if(userChoice== "No" || userChoice == "nO" || userChoice== "NO" || userChoice == "no")
        {
            nameSelect = false;
        }
        else
        {
            cout << "INPUT INVALID! PLEASE ENTER A VALID RESPONSE!" << endl << endl
                 << " User: " ;
            cin >> userChoice;
        }
    }
    playerName = tempName;
}

void characterBuilder::saveCharacter()
{
    characterLifepath player;
    fstream playerFile;
    string nameFile;

    system("CLS");

    cout << endl << " Please enter your desired file name to save your current characters name. Please follow the proper naming convention and add .txt to the end." << endl << endl
         << " " << playerName << ": " ;
    cin >> nameFile;

    playerFile.open(nameFile, ios::out);

    cout << endl << " BEGINING TO SAVE CHARACTER NAME! PLEASE DO NOT TURN OFF YOUR DEVICE!" << endl << endl;

    playerFile << "Name: " << playerName << endl << endl;

    cout << endl << " CHARACTER FILE SUCCESSFULLY SAVED!" << endl << endl;

    playerFile.close();

    system("CLS");

    cout << " Hello " << playerName << "." << endl;

    player.setPersonals(playerName, nameFile);
}

void characterBuilder::newCharacter()
{
    setName();
    saveCharacter();
}

void characterBuilder::changeSettings()
{
    int colorChoice;

    cout << " Please select the option of which color you would like the User Interface to be" << endl
         << " 1) Black       2) Gray" << endl
         << " 3) Blue        4) Green" << endl
         << " 5) Aqua        6) Red" << endl
         << " 7) Purple      8) Yellow" << endl << endl
         << " User: " ;

    cin >> colorChoice;

    switch(colorChoice)
    {
        case 1: // Black
            system("color 08");
            break;
        case 2: // Gray
            system("color 80");
            break;
        case 3: // Blue
            system("color 18");
            break;
        case 4: // Green
            system("color 20");
            break;
        case 5: // Aqua
            system("color 37");
            break;
        case 6: // Red
            system("color 47");
            break;
        case 7: // Purple
            system("color 57");
            break;
        case 8: // Yellow
            system("color 60");
            break;
        default:
            system("color 07");
            break;
    }
}
