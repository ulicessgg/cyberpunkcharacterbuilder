#ifndef NETRUNNER_H
#define NETRUNNER_H

using namespace std;

class netrunner
{
    public:
        void setLifepath(string, string);
        void kindOf();
        void workspace();
        void partner();
        void clients();
        void daemonSource();
        void yourEnemy();

    private:
        string mercName;
        string myFile;
        fstream playerFile;
};

#endif // NETRUNNER_H
