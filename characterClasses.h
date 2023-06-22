#ifndef CHARACTERCLASSES_H
#define CHARACTERCLASSES_H

using namespace std;

class characterClasses
{
    public:
        void mainMenu(string, string);
        void setRockerboy();
        void setSolo();
        void setNetrunner();
        void setTechie();
        void setMedia();
        void setCorpo();
        void setBadge();
        void setFixer();
        void setNomad();

    private:
        string runnerName;
        string role;
        string ability;
        string charFile;
        fstream playerFile;
};

#endif // CHARACTERCLASSES_H
