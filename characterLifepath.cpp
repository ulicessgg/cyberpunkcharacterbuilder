#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include "characterLifepath.h"
#include "characterClasses.h"

using namespace std;

void characterLifepath::setPersonals(string playerName, string nameFile)
{
    characterName = playerName;

    saveFile = nameFile;

    system("CLS");

    cultrualOrigins();
}

void characterLifepath::cultrualOrigins()
{
    playerFile.open(saveFile, ios::app);

    int menuIn;

    cout << " Your Cultural Region?" << endl << endl
         << " 1) North American - Languages You Might Know: Chinese, Cree, Creole, English, French, Navajo, Spanish" << endl
         << " 2) South/Central American - Languages You Might Know: Creole, English, German, Guarani, Mayan, Portuguese, Quechua, Spanish" << endl
         << " 3) Western European - Languages You Might Know: Dutch, English, French, German, Italian, Norwegian, Portuguese, Spanish" << endl
         << " 4) Eastern European - Languages You Might Know: English, Finnish, Polish, Romanian, Russian, Ukrainian" << endl
         << " 5) Middle Eastern/ North African - Languages You Might Know: Arabic, Berber, English, Farsi, French, Hebrew, Turkish" << endl
         << " 6) Sub-Saharan Africa - Languages You Might Know: Arabic, English, French, Hausa, Lingala, Oromo, Portuguese, Swahili, Twi, Yoruba" << endl
         << " 7) South Asian - Languages You Might Know: Bengali, Dari, English, Hindi, Nepali, Sinhalese, Tamil, Urdu" << endl
         << " 8) South East Asian - Languages You Might Know: Arabic, Burmese, English, Filipino, Hindi, Indonesian, Khmer, Malayan, Vietnamese" << endl
         << " 9) East Asian - Languages You Might Know: Cantonese, English, Japanese, Korean, Mandarin, Mongolian" << endl
         << " 10) Oceania/Pacific Islander - Languages You Might Know: English, French, Hawaiian, Maori, Pama-Nyungan, Tahitian" << endl
         << " 11) Quit" << endl << endl
         << " " << characterName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Your Cultural Region?: North American" << endl;
            break;
        case 2:
            playerFile << "Your Cultural Region?: South/Central American" << endl;
            break;
        case 3:
            playerFile << "Your Cultural Region?: Western European" << endl;
            break;
        case 4:
            playerFile << "Your Cultural Region?: Eastern European" << endl;
            break;
        case 5:
            playerFile << "Your Cultural Region?: Middle Eastern/ North African" << endl;
            break;
        case 6:
            playerFile << "Your Cultural Region?: Sub-Saharan Africa" << endl;
            break;
        case 7:
            playerFile << "Your Cultural Region?: South Asian" << endl;
            break;
        case 8:
            playerFile << "Your Cultural Region?: South East Asian" << endl;
            break;
        case 9:
            playerFile << "Your Cultural Region?: East Asian" << endl;
            break;
        case 10:
            playerFile << "Your Cultural Region?: Oceania/Pacific Islander" << endl;
            break;
        case 11:
            break;
        default:
            system("CLS");
            cultrualOrigins();
            break;
    }

    system("CLS");

    personality();
}

void characterLifepath::personality()
{
    int menuIn;

    cout << " What Are You Like?" << endl << endl
         << " 1) Shy and Secretive" << endl
         << " 2) Rebellious, antisocial, and violent" << endl
         << " 3) Arrogant, proud, and aloof" << endl
         << " 4) Moody, rash, and headstrong" << endl
         << " 5) Picky, fussy, and nervous" << endl
         << " 6) Stable and serious" << endl
         << " 7) Silly, and fluff-headed" << endl
         << " 8) Sneaky and deceptive" << endl
         << " 9) Intellectual and detatched" << endl
         << " 10) Friendly and outgoing" << endl
         << " 11) Quit" << endl << endl
         << " " << characterName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What Are You Like?: Shy and Secretive" << endl;
            break;
        case 2:
            playerFile << "What Are You Like?: Rebellious, antisocial, and violent" << endl;
            break;
        case 3:
            playerFile << "What Are You Like?: Arrogant, proud, and aloof" << endl;
            break;
        case 4:
            playerFile << "What Are You Like?: Moody, rash, and headstrong" << endl;
            break;
        case 5:
            playerFile << "What Are You Like?: Picky, fussy, and nervous" << endl;
            break;
        case 6:
            playerFile << "What Are You Like?: Stable and serious" << endl;
            break;
        case 7:
            playerFile << "What Are You Like?: Silly, and fluff-headed" << endl;
            break;
        case 8:
            playerFile << "What Are You Like?: Sneaky and deceptive" << endl;
            break;
        case 9:
            playerFile << "What Are You Like?: Intellectual and detatched" << endl;
            break;
        case 10:
            playerFile << "What Are You Like?: Friendly and outgoing" << endl;
            break;
        case 11:
            break;
        default:
            system("CLS");
            personality();
            break;
    }

    system("CLS");

    dressAndHair();
}

void characterLifepath::dressAndHair()
{
    int menuIn;
    int secMenuIn;

    cout << " Clothing Style?" << endl << endl
         << " 1) General Chic" << endl
         << " 2) Leisurewear" << endl
         << " 3) Urban Flash" << endl
         << " 4) Businesswear" << endl
         << " 5) High Fashion" << endl
         << " 6) Bohemian" << endl
         << " 7) Bag Lady Chic" << endl
         << " 8) Gang Colors" << endl
         << " 9) Nomad Leathers" << endl
         << " 10) Asia Pop" << endl
         << " 11) Quit" << endl << endl
         << " " << characterName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Clothing Style?: General Chic" << endl;
            break;
        case 2:
            playerFile << "Clothing Style?: Leisurewear" << endl;
            break;
        case 3:
            playerFile << "Clothing Style?: Urban Flash" << endl;
            break;
        case 4:
            playerFile << "Clothing Style?: Businesswear" << endl;
            break;
        case 5:
            playerFile << "Clothing Style?: High Fashion" << endl;
            break;
        case 6:
            playerFile << "Clothing Style?: Bohemian" << endl;
            break;
        case 7:
            playerFile << "Clothing Style?: Bag Lady Chic" << endl;
            break;
        case 8:
            playerFile << "Clothing Style?: Gang Colors" << endl;
            break;
        case 9:
            playerFile << "Clothing Style?: Nomad Leathers" << endl;
            break;
        case 10:
            playerFile << "Clothing Style?: Asia Pop" << endl;
            break;
        case 11:
            break;
        default:
            system("CLS");
            dressAndHair();
            break;
    }

    system("CLS");

    cout << " Hairstyle?" << endl << endl
         << " 1) Mohawk" << endl
         << " 2) Long and ratty" << endl
         << " 3) Short and spiked" << endl
         << " 4) Wild and all over" << endl
         << " 5) Bold" << endl
         << " 6) Striped" << endl
         << " 7) Wild colors" << endl
         << " 8) Neat and short" << endl
         << " 9) Short and curly" << endl
         << " 10) Long and straight" << endl
         << " 11) Quit" << endl << endl
         << " " << characterName << ": ";

    cin >> secMenuIn;

    switch(secMenuIn)
    {
        case 1:
            playerFile << "Hairstyle?: Mohawk" << endl;
            break;
        case 2:
            playerFile << "Hairstyle?: Long and ratty" << endl;
            break;
        case 3:
            playerFile << "Hairstyle?: Short and spiked" << endl;
            break;
        case 4:
            playerFile << "Hairstyle?: Wild and all over" << endl;
            break;
        case 5:
            playerFile << "Hairstyle?: Bold" << endl;
            break;
        case 6:
            playerFile << "Hairstyle?: Striped" << endl;
            break;
        case 7:
            playerFile << "Hairstyle?: Wild colors" << endl;
            break;
        case 8:
            playerFile << "Hairstyle?: Neat and short" << endl;
            break;
        case 9:
            playerFile << "Hairstyle?: Short and curly" << endl;
            break;
        case 10:
            playerFile << "Hairstyle?: Long and straight" << endl;
            break;
        case 11:
            break;
        default:
            system("CLS");
            dressAndHair();
            break;
    }

    system("CLS");

    affectation();
}

void characterLifepath::affectation()
{
    int menuIn;

    cout << " Affectation You Are Never Without?" << endl << endl
         << " 1) Tattoos" << endl
         << " 2) Mirrorshades" << endl
         << " 3) Ritual scars" << endl
         << " 4) Spiked gloves" << endl
         << " 5) Nose rings" << endl
         << " 6) Tongue or other piercings" << endl
         << " 7) Strange fingernail implants" << endl
         << " 8) Spiked boots or heels" << endl
         << " 9) Fingerless gloves" << endl
         << " 10) Strange contacts" << endl
         << " 11) Quit" << endl << endl
         << " " << characterName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Affectation You Are Never Without?: Tattoos" << endl;
            break;
        case 2:
            playerFile << "Affectation You Are Never Without?: Mirrorshades" << endl;
            break;
        case 3:
            playerFile << "Affectation You Are Never Without?: Ritual scars" << endl;
            break;
        case 4:
            playerFile << "Affectation You Are Never Without?: Spiked gloves" << endl;
            break;
        case 5:
            playerFile << "Affectation You Are Never Without?: Nose rings" << endl;
            break;
        case 6:
            playerFile << "Affectation You Are Never Without?: Tongue or other piercings" << endl;
            break;
        case 7:
            playerFile << "Affectation You Are Never Without?: Strange fingernail implants" << endl;
            break;
        case 8:
            playerFile << "Affectation You Are Never Without?: Spiked boots or heels" << endl;
            break;
        case 9:
            playerFile << "Affectation You Are Never Without?: Fingerless gloves" << endl;
            break;
        case 10:
            playerFile << "Affectation You Are Never Without?: Strange contacts" << endl;
            break;
        case 11:
            break;
        default:
            system("CLS");
            affectation();
            break;
    }

    system("CLS");

    motivationsAndRelationships();
}

void characterLifepath::motivationsAndRelationships()
{
    int menuIn;
    int secMenuIn;

    cout << " What Do You Value Most?" << endl << endl
         << " 1) Money" << endl
         << " 2) Humor" << endl
         << " 3) Your word" << endl
         << " 4) Honesty" << endl
         << " 5) Knowledge" << endl
         << " 6) Vengance" << endl
         << " 7) Love" << endl
         << " 8) Power" << endl
         << " 9) Family" << endl
         << " 10) Friendship" << endl
         << " 11) Quit" << endl << endl
         << " " << characterName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What Do You Value Most?: Money" << endl;
            break;
        case 2:
            playerFile << "What Do You Value Most?: Humor" << endl;
            break;
        case 3:
            playerFile << "What Do You Value Most?: Your word" << endl;
            break;
        case 4:
            playerFile << "What Do You Value Most?: Honesty" << endl;
            break;
        case 5:
            playerFile << "What Do You Value Most?: Knowledge" << endl;
            break;
        case 6:
            playerFile << "What Do You Value Most?: Vengance" << endl;
            break;
        case 7:
            playerFile << "What Do You Value Most?: Love" << endl;
            break;
        case 8:
            playerFile << "What Do You Value Most?: Power" << endl;
            break;
        case 9:
            playerFile << "What Do You Value Most?: Family" << endl;
            break;
        case 10:
            playerFile << "What Do You Value Most?: Friendship" << endl;
            break;
        case 11:
            break;
        default:
            system("CLS");
            motivationsAndRelationships();
            break;
    }

    system("CLS");

    cout << " How Do You Feel About Most People?" << endl << endl
         << " 1) I stay neutral." << endl
         << " 2) I like almost everyone." << endl
         << " 3) I hate almost everyone." << endl
         << " 4) People are tools. Use them for your own goals then discard them." << endl
         << " 5) Every person is a valuable individual." << endl
         << " 6) People are obstacles to be destroyed if they cross me." << endl
         << " 7) People are untrustworthy. Don't depend on anyone." << endl
         << " 8) Wipe 'em all out and let the cockroaches take over." << endl
         << " 9) People are wonderful!" << endl
         << " 10) Quit" << endl << endl
         << " " << characterName << ": " ;

    cin >> secMenuIn;

    switch(secMenuIn)
    {
        case 1:
            playerFile << "How Do You Feel About Most People?: I stay neutral." << endl;
            break;
        case 2:
            playerFile << "How Do You Feel About Most People?: I like almost everyone." << endl;
            break;
        case 3:
            playerFile << "How Do You Feel About Most People?: I hate almost everyone." << endl;
            break;
        case 4:
            playerFile << "How Do You Feel About Most People?: People are tools. Use them for your own goals then discard them." << endl;
            break;
        case 5:
            playerFile << "How Do You Feel About Most People?: Every person is a valuable individual." << endl;
            break;
        case 6:
            playerFile << "How Do You Feel About Most People?: People are obstacles to be destroyed if they cross me." << endl;
            break;
        case 7:
            playerFile << "How Do You Feel About Most People?: People are untrustworthy. Don't depend on anyone." << endl;
            break;
        case 8:
            playerFile << "How Do You Feel About Most People?: Wipe 'em all out and let the cockroaches take over." << endl;
            break;
        case 9:
            playerFile << "How Do You Feel About Most People?: People are wonderful!" << endl;
            break;
        case 10:
            break;
        default:
            system("CLS");
            motivationsAndRelationships();
            break;
    }

    system("CLS");

    personValued();
}

void characterLifepath::personValued()
{
    int menuIn;

    cout << " Most Valued Person in Your Life?" << endl << endl
         << " 1) A parent" << endl
         << " 2) A brother or sister" << endl
         << " 3) A lover" << endl
         << " 4) A friend" << endl
         << " 5) Yourself" << endl
         << " 6) A pet" << endl
         << " 7) A teacher or mentor" << endl
         << " 8) A public figre" << endl
         << " 9) A personal hero" << endl
         << " 10) No one" << endl
         << " 11) Quit" << endl << endl
         << " " << characterName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Most Valued Person in Your Life?: A parent" << endl;
            break;
        case 2:
            playerFile << "Most Valued Person in Your Life?: A brother or sister" << endl;
            break;
        case 3:
            playerFile << "Most Valued Person in Your Life?: A lover" << endl;
            break;
        case 4:
            playerFile << "Most Valued Person in Your Life?: A friend" << endl;
            break;
        case 5:
            playerFile << "Most Valued Person in Your Life?: Yourself" << endl;
            break;
        case 6:
            playerFile << "Most Valued Person in Your Life?: A pet" << endl;
            break;
        case 7:
            playerFile << "Most Valued Person in Your Life?: A teacher or mentor" << endl;
            break;
        case 8:
            playerFile << "Most Valued Person in Your Life?: A public figre" << endl;
            break;
        case 9:
            playerFile << "Most Valued Person in Your Life?: A personal hero" << endl;
            break;
        case 10:
            playerFile << "Most Valued Person in Your Life?: No one" << endl;
            break;
        case 11:
            break;
        default:
            system("CLS");
            personValued();
            break;
    }

    system("CLS");

    possessionValued();
}

void characterLifepath::possessionValued()
{
    int menuIn;

    cout << " Most Valued Possession You Own?" << endl << endl
         << " 1) A weapon" << endl
         << " 2) A tool" << endl
         << " 3) A piece of clothing" << endl
         << " 4) A photograph" << endl
         << " 5) A book or diary" << endl
         << " 6) A recording" << endl
         << " 7) A musical instrument" << endl
         << " 8) A piece of jewelery" << endl
         << " 9) A toy" << endl
         << " 10) A letter" << endl
         << " 11) Quit" << endl << endl
         << " " << characterName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Most Valued Possession You Own?:  A weapon" << endl;
            break;
        case 2:
            playerFile << "Most Valued Possession You Own?: A tool" << endl;
            break;
        case 3:
            playerFile << "Most Valued Possession You Own?: A piece of clothing" << endl;
            break;
        case 4:
            playerFile << "Most Valued Possession You Own?: A photograph" << endl;
            break;
        case 5:
            playerFile << "Most Valued Possession You Own?: A book or diary" << endl;
            break;
        case 6:
            playerFile << "Most Valued Possession You Own?: A recording" << endl;
            break;
        case 7:
            playerFile << "Most Valued Possession You Own?: A musical instrument" << endl;
            break;
        case 8:
            playerFile << "Most Valued Possession You Own?: A piece of jewelery" << endl;
            break;
        case 9:
            playerFile << "Most Valued Possession You Own?: A toy" << endl;
            break;
        case 10:
            playerFile << "Most Valued Possession You Own?: A letter" << endl;
            break;
        case 11:
            break;
        default:
            system("CLS");
            possessionValued();
            break;
    }

    system("CLS");

    familyBackground();
}

void characterLifepath::familyBackground()
{
    int menuIn;

    cout << " Your Original Family Background?" << endl << endl
         << " 1) Corpo Execs" << endl
         << " 2) Corpo Managers" << endl
         << " 3) Corpo Technicians" << endl
         << " 4) Nomad Pack" << endl
         << " 5) Ganger \"Family\"" << endl
         << " 6) Combat Zoners" << endl
         << " 7) Urban Homeless" << endl
         << " 8) Megastructure Warren Rats" << endl
         << " 9) Reclaimers" << endl
         << " 10) Edgerunners" << endl
         << " 11) Quit" << endl << endl
         << " " << characterName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Your Original Family Background?: Corpo Execs" << endl;
            break;
        case 2:
            playerFile << "Your Original Family Background?: Corpo Managers" << endl;
            break;
        case 3:
            playerFile << "Your Original Family Background?: Corpo Technicians" << endl;
            break;
        case 4:
            playerFile << "Your Original Family Background?: Nomad Pack" << endl;
            break;
        case 5:
            playerFile << "Your Original Family Background?: Ganger \"Family\"" << endl;
            break;
        case 6:
            playerFile << "Your Original Family Background?: Combat Zoners" << endl;
            break;
        case 7:
            playerFile << "Your Original Family Background?: Urban Homeless" << endl;
            break;
        case 8:
            playerFile << "Your Original Family Background?: Megastructure Warren Rats" << endl;
            break;
        case 9:
            playerFile << "Your Original Family Background?: Reclaimers" << endl;
            break;
        case 10:
            playerFile << "Your Original Family Background?: Edgerunners" << endl;
            break;
        case 11:
            break;
        default:
            system("CLS");
            familyBackground();
            break;
    }

    system("CLS");

    environment();
}

void characterLifepath::environment()
{
    int menuIn;

    cout << " Childhood Environment?" << endl << endl
         << " 1) Ran on The Street, with no adult supervision." << endl
         << " 2) Spent in a safe Corp Zone walled off from the rest of the City." << endl
         << " 3) In a Nomad pack moving from place to place." << endl
         << " 4) In a Nomad pack with roots in transport." << endl
         << " 5) In a decaying, once upscale neighborhood, now holding off the boosters to survive." << endl
         << " 6) In the heart of the Combat Zone, living in a wrecked building or other squat." << endl
         << " 7) In a huge \"megastructure\" building controlled by a Corp or the City." << endl
         << " 8) In the ruins of a deserted town or city taken over by Reclaimers." << endl
         << " 9) In a Drift Nation that is a meeting place for all kinds of people." << endl
         << " 10) In a Corpo luxury \"starscraper,\" high above the rest of the teeming rabble." << endl
         << " 11) Quit" << endl << endl
         << " " << characterName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Childhood Environment?: Ran on The Street, with no adult supervision." << endl;
            break;
        case 2:
            playerFile << "Childhood Environment?: Spent in a safe Corp Zone walled off from the rest of the City." << endl;
            break;
        case 3:
            playerFile << "Childhood Environment?: In a Nomad pack moving from place to place." << endl;
            break;
        case 4:
            playerFile << "Childhood Environment?: In a Nomad pack with roots in transport." << endl;
            break;
        case 5:
            playerFile << "Childhood Environment?: In a decaying, once upscale neighborhood, now holding off the boosters to survive." << endl;
            break;
        case 6:
            playerFile << "Childhood Environment?: In the heart of the Combat Zone, living in a wrecked building or other squat." << endl;
            break;
        case 7:
            playerFile << "Childhood Environment?: In a huge \"megastructure\" building controlled by a Corp or the City." << endl;
            break;
        case 8:
            playerFile << "Childhood Environment?: In the ruins of a deserted town or city taken over by Reclaimers." << endl;
            break;
        case 9:
            playerFile << "Childhood Environment?: In a Drift Nation that is a meeting place for all kinds of people." << endl;
            break;
        case 10:
            playerFile << "Childhood Environment?: In a Corpo luxury \"starscraper,\" high above the rest of the teeming rabble." << endl;
            break;
        case 11:
            break;
        default:
            system("CLS");
            environment();
            break;
    }

    system("CLS");

    familyCrisis();
}

void characterLifepath::familyCrisis()
{
    int menuIn;

    cout << " Your Family Crisis?" << endl << endl
         << " 1) Your family lost everything through betrayal." << endl
         << " 2) Your family lost everything through bad management." << endl
         << " 3) Your family was exiled or otherwise driven from their original home/nation/Corp." << endl
         << " 4) Your family is imprisoned, and you alone escaped." << endl
         << " 5) Your family vanished. You are the only remaining member." << endl
         << " 6) Your family was killed, and you were the only survivor." << endl
         << " 7) Your family is involved in a long-term conspiracy, organization, or association, such as a crime family or revolutionary group." << endl
         << " 8) Your family was scattered to the winds due to misfortune." << endl
         << " 9) Your family is cursed with a hereditary feud that has lasted generations." << endl
         << " 10) You are the inheritor of a family debt; you must honor this debt before moving on with you’re life." << endl
         << " 11) Quit" << endl << endl
         << " " << characterName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Your Family Crisis?: Your family lost everything through betrayal." << endl;
            break;
        case 2:
            playerFile << "Your Family Crisis?: Your family lost everything through bad management." << endl;
            break;
        case 3:
            playerFile << "Your Family Crisis?: Your family was exiled or otherwise driven from their original home/nation/Corp." << endl;
            break;
        case 4:
            playerFile << "Your Family Crisis?: Your family is imprisoned, and you alone escaped." << endl;
            break;
        case 5:
            playerFile << "Your Family Crisis?: Your family vanished. You are the only remaining member." << endl;
            break;
        case 6:
            playerFile << "Your Family Crisis?: Your family was killed, and you were the only survivor." << endl;
            break;
        case 7:
            playerFile << "Your Family Crisis?: Your family is involved in a long-term conspiracy, organization, or association, such as a crime family or revolutionary group." << endl;
            break;
        case 8:
            playerFile << "Your Family Crisis?: Your family was scattered to the winds due to misfortune." << endl;
            break;
        case 9:
            playerFile << "Your Family Crisis?: Your family is cursed with a hereditary feud that has lasted generations." << endl;
            break;
        case 10:
            playerFile << "Your Family Crisis?: You are the inheritor of a family debt; you must honor this debt before moving on with you’re life." << endl;
            break;
        case 11:
            break;
        default:
            system("CLS");
            familyCrisis();
            break;
    }

    system("CLS");

    friends();
}

void characterLifepath::friends()
{
    int menuIn;

    cout << " Your Friends? Friend's Relationship to You?" << endl << endl
         << " 1) Like an older sibling to you." << endl
         << " 2) Like a younger sibling to you." << endl
         << " 3) A teacher or mentor." << endl
         << " 4) A partner or coworker." << endl
         << " 5) A former lover." << endl
         << " 6) An old enemy." << endl
         << " 7) Like a parent to you." << endl
         << " 8) An old childhood friend." << endl
         << " 9) Someone you know from The Street." << endl
         << " 10) Someone with a common interest or goal." << endl
         << " 11) Quit" << endl << endl
         << " " << characterName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Your Friends? Friend's Relationship to You?: Like an older sibling to you." << endl;
            break;
        case 2:
            playerFile << "Your Friends? Friend's Relationship to You?: Like a younger sibling to you." << endl;
            break;
        case 3:
            playerFile << "Your Friends? Friend's Relationship to You?: A teacher or mentor." << endl;
            break;
        case 4:
            playerFile << "Your Friends? Friend's Relationship to You?: A partner or coworker." << endl;
            break;
        case 5:
            playerFile << "Your Friends? Friend's Relationship to You?: A former lover." << endl;
            break;
        case 6:
            playerFile << "Your Friends? Friend's Relationship to You?: An old enemy." << endl;
            break;
        case 7:
            playerFile << "Your Friends? Friend's Relationship to You?: Like a parent to you." << endl;
            break;
        case 8:
            playerFile << "Your Friends? Friend's Relationship to You?: An old childhood friend." << endl;
            break;
        case 9:
            playerFile << "Your Friends? Friend's Relationship to You?: Someone you know from The Street." << endl;
            break;
        case 10:
            playerFile << "Your Friends? Friend's Relationship to You?: Someone with a common interest or goal." << endl;
            break;
        case 11:
            break;
        default:
            system("CLS");
            friends();
            break;
    }

    system("CLS");

    enemies();
}

void characterLifepath::enemies()
{
    int menuIn;
    int secMenuIn;
    int triMenuIn;

    cout << " Your Enemies?" << endl << endl
         << " 1) Ex-friend" << endl
         << " 2) Ex-lover" << endl
         << " 3) Estranged relative" << endl
         << " 4) Childhood enemy" << endl
         << " 5) Person working for you" << endl
         << " 6) Person you work for" << endl
         << " 7) Partner or coworker" << endl
         << " 8) Corpo Exec" << endl
         << " 9) Government Official" << endl
         << " 10) Boosterganger" << endl
         << " 11) Quit" << endl << endl
         << " " << characterName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Your Enemies?: Ex-friend" << endl;
            break;
        case 2:
            playerFile << "Your Enemies?: Ex-lover" << endl;
            break;
        case 3:
            playerFile << "Your Enemies?: Estranged relative" << endl;
            break;
        case 4:
            playerFile << "Your Enemies?: Childhood enemy" << endl;
            break;
        case 5:
            playerFile << "Your Enemies?: Person working for you" << endl;
            break;
        case 6:
            playerFile << "Your Enemies?: Person you work for" << endl;
            break;
        case 7:
            playerFile << "Your Enemies?: Partner or coworker" << endl;
            break;
        case 8:
            playerFile << "Your Enemies?: Corpo Exec" << endl;
            break;
        case 9:
            playerFile << "Your Enemies?: Government Official" << endl;
            break;
        case 10:
            playerFile << "Your Enemies?: Boosterganger" << endl;
            break;
        case 11:
            break;
        default:
            system("CLS");
            enemies();
            break;
    }

    system("CLS");

    cout << " What Caused it? Who's been Wronged?" << endl << endl
         << " 1) Caused the other to lose face or status." << endl
         << " 2) Caused the loss of lover, friend, or relative." << endl
         << " 3) Caused a major public humiliation." << endl
         << " 4) Accused the other of cowardice or some other major personal flaw." << endl
         << " 5) Deserted or betrayed the other." << endl
         << " 6) Turned down the other's offer of a job or romantic involvement." << endl
         << " 7) You just don't like eachother." << endl
         << " 8) One of you was a romantic rival." << endl
         << " 9) One of you was a business rival." << endl
         << " 10) One of you set the other up for a crime they didn't commit." << endl
         << " 11) Quit" << endl << endl
         << " " << characterName << ": ";

    cin >> secMenuIn;

    switch(secMenuIn)
    {
        case 1:
            playerFile << "What Caused it? Who's been Wronged?: Caused the other to lose face or status." << endl;
            break;
        case 2:
            playerFile << "What Caused it? Who's been Wronged?: Caused the loss of lover, friend, or relative." << endl;
            break;
        case 3:
            playerFile << "What Caused it? Who's been Wronged?: Caused a major public humiliation." << endl;
            break;
        case 4:
            playerFile << "What Caused it? Who's been Wronged?: Accused the other of cowardice or some other major personal flaw." << endl;
            break;
        case 5:
            playerFile << "What Caused it? Who's been Wronged?: Deserted or betrayed the other." << endl;
            break;
        case 6:
            playerFile << "What Caused it? Who's been Wronged?: Turned down the other's offer of a job or romantic involvement." << endl;
            break;
        case 7:
            playerFile << "What Caused it? Who's been Wronged?: You just don't like eachother." << endl;
            break;
        case 8:
            playerFile << "What Caused it? Who's been Wronged?: One of you was a romantic rival." << endl;
            break;
        case 9:
            playerFile << "What Caused it? Who's been Wronged?: One of you was a business rival." << endl;
            break;
        case 10:
            playerFile << "What Caused it? Who's been Wronged?: One of you set the other up for a crime they didn't commit." << endl;
            break;
        case 11:
            break;
        default:
            system("CLS");
            enemies();
            break;
    }

    system("CLS");

    cout << " What Can They Throw at You?" << endl << endl
         << " 1) Just themselves and even they won't go out of their way." << endl
         << " 2) Just themselves." << endl
         << " 3) Just themselves and a close friend." << endl
         << " 4) Themselves and few friends." << endl
         << " 5) An entire gang." << endl
         << " 6) The local cops or other Badges." << endl
         << " 7) A powerful gang lord or small Corp." << endl
         << " 8) A powerful Corp." << endl
         << " 9) An entire city or government or agency." << endl
         << " 10) Quit" << endl << endl
         << " " << characterName << ": ";

    cin >> triMenuIn;

    switch(triMenuIn)
    {
        case 1:
            playerFile << "What Can They Throw at You?: Just themselves and even they won't go out of their way." << endl;
            break;
        case 2:
            playerFile << "What Can They Throw at You?: Just themselves." << endl;
            break;
        case 3:
            playerFile << "What Can They Throw at You?: Just themselves and a close friend." << endl;
            break;
        case 4:
            playerFile << "What Can They Throw at You?: Themselves and few friends." << endl;
            break;
        case 5:
            playerFile << "What Can They Throw at You?: An entire gang." << endl;
            break;
        case 6:
            playerFile << "What Can They Throw at You?: The local cops or other Badges." << endl;
            break;
        case 7:
            playerFile << "What Can They Throw at You?: A powerful gang lord or small Corp." << endl;
            break;
        case 8:
            playerFile << "What Can They Throw at You?: A powerful Corp." << endl;
            break;
        case 9:
            playerFile << "What Can They Throw at You?: An entire city or government or agency." << endl;
            break;
        case 11:
            break;
        default:
            system("CLS");
            enemies();
            break;
    }

    system("CLS");

    planOfRetaliation();
}

void characterLifepath::planOfRetaliation()
{
    int menuIn;

    cout << " What are You/They Gonna do About it?" << endl << endl
         << " 1) Avoid the scum." << endl
         << " 2) Go into a murderous rage and try to physically rip their face off." << endl
         << " 3) Backstab them indirectly." << endl
         << " 4) Verbally attack them." << endl
         << " 5) Set them up for a crime or other transgression they didn't commit." << endl
         << " 6) Set out to murder or maim them." << endl
         << " 7) Quit" << endl << endl
         << " " << characterName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "What are You/They Gonna do About it?: Avoid the scum." << endl;
            break;
        case 2:
            playerFile << "What are You/They Gonna do About it?: Go into a murderous rage and try to physically rip their face off." << endl;
            break;
        case 3:
            playerFile << "What are You/They Gonna do About it?: Backstab them indirectly." << endl;
            break;
        case 4:
            playerFile << "What are You/They Gonna do About it?: Verbally attack them." << endl;
            break;
        case 5:
            playerFile << "What are You/They Gonna do About it?: Set them up for a crime or other transgression they didn't commit." << endl;
            break;
        case 6:
            playerFile << "What are You/They Gonna do About it?: Set out to murder or maim them." << endl;
            break;
        case 7:
            break;
        default:
            system("CLS");
            planOfRetaliation();
            break;
    }

    system("CLS");

    tragicLove();
}

void characterLifepath::tragicLove()
{
    int menuIn;

    cout << " Your Tragic Love Affair(s)? What Happened?" << endl << endl
         << " 1) Your lover died in an accident." << endl
         << " 2) Your lover mysteriously vanished." << endl
         << " 3) It just didn't work out." << endl
         << " 4) A personal goal or vendetta came between you and your lover." << endl
         << " 5) Your lover was kidnapped." << endl
         << " 6) Your lover went insane or cyberpsycho." << endl
         << " 7) Your lover committed suicide." << endl
         << " 8) Your lover was killed in a fight." << endl
         << " 9) A rival cut you out of the action." << endl
         << " 10) Your lover is imprisoned or exiled." << endl
         << " 11) Quit" << endl << endl
         << " " << characterName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Your Tragic Love Affair(s)? What Happened?: Your lover died in an accident." << endl;
            break;
        case 2:
            playerFile << "Your Tragic Love Affair(s)? What Happened?: Your lever mysteriously vanished." << endl;
            break;
        case 3:
            playerFile << "Your Tragic Love Affair(s)? What Happened?: It just didn't work out." << endl;
            break;
        case 4:
            playerFile << "Your Tragic Love Affair(s)? What Happened?: A personal goal or vendetta came between you and your lover." << endl;
            break;
        case 5:
            playerFile << "Your Tragic Love Affair(s)? What Happened?: Your lover was kidnapped." << endl;
            break;
        case 6:
            playerFile << "Your Tragic Love Affair(s)? What Happened?: Your lover went insane or cyberpsycho." << endl;
            break;
        case 7:
            playerFile << "Your Tragic Love Affair(s)? What Happened?: Your lover committed suicide." << endl;
            break;
        case 8:
            playerFile << "Your Tragic Love Affair(s)? What Happened?: Your lover was killed in a fight." << endl;
            break;
        case 9:
            playerFile << "Your Tragic Love Affair(s)? What Happened?: A rival cut you out of the action." << endl;
            break;
        case 10:
            playerFile << "Your Tragic Love Affair(s)? What Happened?: Your lover is imprisoned or exiled." << endl;
            break;
        case 11:
            break;
        default:
            system("CLS");
            tragicLove();
            break;
    }

    system("CLS");

    lifeGoals();
}

void characterLifepath::lifeGoals()
{
    characterClasses edgeRunner;
    int menuIn;

    cout << " Life Goals?" << endl << endl
         << " 1) Get rid of bad reputation." << endl
         << " 2) Gain power and control." << endl
         << " 3) Get of The Street no matter what it takes." << endl
         << " 4) Cause pain and suffering to anyone who crosses you." << endl
         << " 5) Live down your past life and try to forget it." << endl
         << " 6) Hunt down those responsible for your miserable life and make them pay." << endl
         << " 7) Get what’s rightfully yours." << endl
         << " 8) Save, if possible, anyone else involved in your background, like a lover, or family member." << endl
         << " 9) Gain fame and recognition." << endl
         << " 10) Become feared and respected." << endl
         << " 11) Quit" << endl << endl
         << " " << characterName << ": ";

    cin >> menuIn;

    switch(menuIn)
    {
        case 1:
            playerFile << "Life Goals?: Get rid of bad reputation." << endl << endl;
            break;
        case 2:
            playerFile << "Life Goals?: Gain power and control." << endl << endl;
            break;
        case 3:
            playerFile << "Life Goals?: Get of The Street no matter what it takes." << endl << endl;
            break;
        case 4:
            playerFile << "Life Goals?: Cause pain and suffering to anyone who crosses you." << endl << endl;
            break;
        case 5:
            playerFile << "Life Goals?: Live down your past life and try to forget it." << endl << endl;
            break;
        case 6:
            playerFile << "Life Goals?: Hunt down those responsible for your miserable life and make them pay." << endl << endl;
            break;
        case 7:
            playerFile << "Life Goals?: Get what’s rightfully yours." << endl << endl;
            break;
        case 8:
            playerFile << "Life Goals?: Save, if possible, anyone else involved in your background, like a lover, or family member." << endl << endl;
            break;
        case 9:
            playerFile << "Life Goals?: Gain fame and recognition." << endl << endl;
            break;
        case 10:
            playerFile << "Life Goals?: Become feared and respected." << endl << endl;
            break;
        case 11:
            break;
        default:
            system("CLS");
            lifeGoals();
            break;
    }

    playerFile.close();

    system("CLS");

    edgeRunner.mainMenu(characterName, saveFile);
}

