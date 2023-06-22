#ifndef SOLO_H
#define SOLO_H

using namespace std;

class solo
{
    public:
        void setLifepath(string, string);
        void kindOf();
        void moralCompass();
        void myTurf();
        void yourEnemy();

    private:
        string mercName;
        string myFile;
        fstream playerFile;
};

#endif // SOLO_H
