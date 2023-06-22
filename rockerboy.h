#ifndef ROCKERBOY_H
#define ROCKERBOY_H

using namespace std;

class rockerboy
{
    public:
        void setLifepath(string, string);
        void kindOf();
        void whyLeave();
        void gigLocal();
        void yourEnemy();

    private:
        string mercName;
        string myFile;
        fstream playerFile;
};

#endif // ROCKERBOY_H
