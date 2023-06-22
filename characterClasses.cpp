#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include "characterClasses.h"
#include "rockerboy.h"
#include "solo.h"
#include "netrunner.h"
#include "techie.h"
#include "media.h"
#include "corpo.h"
#include "badge.h"
#include "fixer.h"
#include "nomad.h"

using namespace std;

void characterClasses::mainMenu(string characterName, string saveFile)
{
    runnerName = characterName;

    charFile = saveFile;

    playerFile.open(saveFile, ios::app);

    int menuIn;

    cout << " Pick a Role. From the following enter the corresponding number for that option." << endl << endl
         << " 1) Rockerboy - Rock-and-roll rebels who use performance, art, and rhetoric to fight authority." << endl
         << " 2) Solo - Assassins, bodyguards, killers, and soldiers-for-hire in a lawless new world." << endl
         << " 3) Netrunner - Cybernetic master hackers of the post-NET world and brain-burning secret stealers." << endl
         << " 4) Techie - Renegade mechanics and supertech inventors; the people who make the Dark Future run." << endl
         << " 5) Media - Reporters, media stars, and social influencers risking it all for the truth-or glory." << endl
         << " 6) Corpo - Corpo power brokers and business raiders fighting to restore the rule of the Megacorps." << endl
         << " 7) Badge - Maximum law enforcers patrolling the mean streets and barbarian warrior highways beyond." << endl
         << " 8) Fixer - Dealmakers, organizers, and information brokers in the post-War Midnight Markets of The Street." << endl
         << " 9) Nomad - Transport experts, ultimate road warriors, pirates, and smugglers who keep the world connected." << endl
         << " 10) Quit" << endl << endl
         << " " << runnerName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            setRockerboy();
            break;
        case 2:
            setSolo();
            break;
        case 3:
            setNetrunner();
            break;
        case 4:
            setTechie();
            break;
        case 5:
            setMedia();
            break;
        case 6:
            setCorpo();
            break;
        case 7:
            setBadge();
            break;
        case 8:
            setFixer();
            break;
        case 9:
            setNomad();
            break;
        case 10:
            break;
        default:
            system("CLS");
            mainMenu(saveFile, characterName);
            break;
    }
}

void characterClasses::setRockerboy()
{
    rockerboy silverhand;

    role = "Role: Rockerboy";

    ability = "Role Ability: Charismatic Impact";

    playerFile << role << endl;

    playerFile << ability << endl << endl;

    silverhand.setLifepath(runnerName, charFile);
}

void characterClasses::setSolo()
{
    solo jackie;

    role = "Role: Solo";

    ability = "Role Ability: Combat Awareness";

    playerFile << role << endl;

    playerFile << ability << endl << endl;

    jackie.setLifepath(runnerName, charFile);
}

void characterClasses::setNetrunner()
{
    netrunner alt;

    role = "Role: Netrunner";

    ability = "Role Ability: Interfacer";

    playerFile << role << endl;

    playerFile << ability << endl << endl;

    alt.setLifepath(runnerName, charFile);
}

void characterClasses::setTechie()
{
    techie judy;

    role = "Role: Techie";

    ability = "Role Ability: Maker";

    playerFile << role << endl;

    playerFile << ability << endl << endl;

    judy.setLifepath(runnerName, charFile);
}

void characterClasses::setMedia()
{
    media regina;

    role = "Role: Media";

    ability = "Role Ability: Credibility";

    playerFile << role << endl;

    playerFile << ability << endl << endl;

    regina.setLifepath(runnerName, charFile);
}

void characterClasses::setCorpo()
{
    corpo goro;

    role = "Role: Corpo";

    ability = "Role Ability: Teamwork";

    playerFile << role << endl;

    playerFile << ability << endl << endl;

    goro.setLifepath(runnerName, charFile);
}

void characterClasses::setBadge()
{
    badge river;

    role = "Role: Badge";

    ability = "Role Ability: Backup";

    playerFile << role << endl;

    playerFile << ability << endl << endl;

    river.setLifepath(runnerName, charFile);
}

void characterClasses::setFixer()
{
    fixer rouge;

    role = "Role: Fixer";

    ability = "Role Ability: Operator";

    playerFile << role << endl;

    playerFile << ability << endl << endl;

    rouge.setLifepath(runnerName, charFile);
}

void characterClasses::setNomad()
{
    nomad panam;

    role = "Role: Nomad";

    ability = "Role Ability: Moto";

    playerFile << role << endl;

    playerFile << ability << endl << endl;

    panam.setLifepath(runnerName, charFile);
}

