#ifndef CORPO_H
#define CORPO_H

using namespace std;

class corpo
{
    public:
        void setLifepath(string, string);
        void kindOf();
        void divison();
        void morals();
        void localeBased();
        void yourEnemy();
        void yourBoss();

    private:
        string mercName;
        string myFile;
        fstream playerFile;
};

#endif // CORPO_H
