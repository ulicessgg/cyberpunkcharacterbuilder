#ifndef CHARACTERLIFEPATH_H
#define CHARACTERLIFEPATH_H

using namespace std;

class characterLifepath
{
    public:
        void setPersonals(string, string);
        void cultrualOrigins();
        void personality();
        void dressAndHair();
        void affectation();
        void motivationsAndRelationships();
        void personValued();
        void possessionValued();
        void familyBackground();
        void environment();
        void familyCrisis();
        void friends();
        void enemies();
        void planOfRetaliation();
        void tragicLove();
        void lifeGoals();

    private:
        string characterName;
        string saveFile;
        fstream playerFile;
};

#endif // CHARACTERLIFEPATH_H
