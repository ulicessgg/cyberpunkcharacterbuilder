#ifndef BADGE_H
#define BADGE_H

using namespace std;

class badge
{
    public:
        void setLifepath(string, string);
        void position();
        void jurisdiction();
        void corruption();
        void yourEnemy();
        void majorTarget();

    private:
        string mercName;
        string myFile;
        fstream playerFile;
};

#endif // BADGE_H
