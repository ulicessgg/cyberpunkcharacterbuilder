#ifndef CHARACTERBUILDER_H
#define CHARACTERBUILDER_H

using namespace std;

class characterBuilder
{
    public:
        void mainMenu();
        void setName();
        void newCharacter();
        void saveCharacter();
        void changeSettings();

    private:
        string playerName;
};

#endif // CHARACTERBUILDER_H
