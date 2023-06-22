#ifndef FIXER_H
#define FIXER_H

using namespace std;

class fixer
{
    public:
        void setLifepath(string, string);
        void kindOf();
        void office();
        void partner();
        void sideClients();
        void yourEnemy();

    private:
        string mercName;
        string myFile;
        fstream playerFile;
};

#endif // FIXER_H
