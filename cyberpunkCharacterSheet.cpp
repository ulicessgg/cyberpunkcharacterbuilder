#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include "characterBuilder.h"
#include "characterClasses.h"
#include "rockerboy.h"
#include "solo.h"
#include "netrunner.h"
#include "techie.h"
#include "media.h"
#include "corpo.h"
#include "badge.h"
#include "fixer.h"
#include "nomad.h"
#include <Windows.h>

using namespace std;

characterBuilder player;

int main()
{
    SetConsoleTitle(TEXT("Cyberpunk RED - Streetrats & Edgerunner: Soul and The New Machine")); 
    player.mainMenu();
    return 0;
}