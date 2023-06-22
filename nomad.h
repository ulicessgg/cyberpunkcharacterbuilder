#ifndef NOMAD_H
#define NOMAD_H

using namespace std;

class nomad
{
    public:
        void setLifepath(string, string);
        void packSize();
        void landClan();
        void airClan();
        void seaClan();
        void yourJob();
        void packPhilosophy();
        void packEnemy();

    private:
        string mercName;
        string myFile;
        fstream playerFile;
};

#endif // NOMAD_H
