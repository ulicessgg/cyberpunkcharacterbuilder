#ifndef STATSANDSKILLS_H
#define STATSANDSKILLS_H

using namespace std;

class statsAndSkills
{
    public:
        void setStats(string, string);
        void rollStats();

    private:
        string engramName;
        string relicFile;
        fstream playerFile;
};

#endif // STATSANDSKILLS_H
