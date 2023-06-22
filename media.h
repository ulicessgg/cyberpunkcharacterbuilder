#ifndef MEDIA_H
#define MEDIA_H

using namespace std;

class media
{
    public:
        void setLifepath(string, string);
        void kindOf();
        void workImpact();
        void ethics();
        void storiesTold();

    private:
        string mercName;
        string myFile;
        fstream playerFile;
};

#endif // MEDIA_H
