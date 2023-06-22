#ifndef TECHIE_H
#define TECHIE_H

using namespace std;

class techie
{
    public:
        void setLifepath(string, string);
        void kindOf();
        void workspace();
        void partner();
        void clients();
        void supplies();
        void yourEnemy();

    private:
        string mercName;
        string myFile;
        fstream playerFile;
};

#endif // TECHIE_H
