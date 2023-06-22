#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include "statsAndSkills.h"

void statsAndSkills::setStats(string mercName, string myFile)
{
    engramName = mercName;

    relicFile = myFile;

    system("CLS");

    rollStats();
}

void statsAndSkills::rollStats()
{
    playerFile.open(relicFile, ios::app);

    int intelligence;
    int willpower;
    int cool;
    int empathy;
    int technique;
    int reflexes;
    int luck;
    int body;
    int dexterity;
    int movement;
    int hitPoints;
    double avg;
    bool statsSet = false;
    string userChoice;

    while(statsSet == false)
    {
        srand ((unsigned)time(0));

        intelligence = rand() % 8 + 2;
        willpower = rand() % 8 + 2;
        cool = rand() % 8 + 2;
        empathy = rand() % 8 + 2;
        technique = rand() % 8 + 2;
        reflexes = rand() % 8 + 2;
        luck = rand() % 8 + 2;
        body = rand() % 8 + 2;
        dexterity = rand() % 8 + 2;
        movement = rand() % 8 + 2;

        cout << " Intelligence: " << intelligence << " | Reflexes: " << reflexes << " | Dexterity: " << dexterity << " | Technique: " << technique << " | Cool: " << cool << endl
             << " Willpower: " << willpower << " | Luck: " << luck << " | Movement: " << movement << " | Body: " << body << " | Empathy: " << empathy << endl;

        cout << endl << " ATTENTION! IF YOU ARE SATISFIED ENTER 'Yes'! IF NOT PLEASE ENTER 'No'." << endl
             << endl << " !THIS IS YOUR ONE AND ONLY TIME TO CHANGE YOUR STATS!" << endl << endl
             << " " << engramName << ": ";
        cin >> userChoice;

        if(userChoice== "Yes" || userChoice == "yEs" || userChoice== "yeS" || userChoice == "yES" || userChoice== "YEs" || userChoice == "YES" || userChoice== "YeS" || userChoice == "yes")
        {
            statsSet = true;
        }
        else if(userChoice== "No" || userChoice == "nO" || userChoice== "NO" || userChoice == "no")
        {
            statsSet = false;
        }
        else
        {
            cout << "INPUT INVALID! PLEASE ENTER A VALID RESPONSE!" << endl << endl
                 << " User: " ;
            cin >> userChoice;
        }
    }

    avg = (body+willpower)/2;
    round(avg);
    hitPoints = 10 + (5*avg);

    playerFile << "Intelligence: " << intelligence << " | Reflexes: " << reflexes << " | Dexterity: " << dexterity << " | Technique: " << technique << " | Cool: " << cool << endl
               << "Willpower: " << willpower << " | Luck: " << luck << " | Movement: " << movement << " | Body: " << body << " | Empathy: " << empathy << endl
               << "Hit Points: " << hitPoints << endl << endl;

    playerFile.close();
}
