#include <iostream>
#include <string>
#include "MusicBox.h"
using namespace std;

    /* public:
    MusicBox();
    MusicBox(string songname, int width);
    string get_song(); 
    int get_width();
    ~MusicBox(); */

int main(){

    MusicBox Song1 = MusicBox();
    MusicBox Song2 = MusicBox("Blue", 7);


    cout << "Song 1: " << Song1.get_song() << ", width:  " << Song1.get_width() << endl;
    cout << "Song 2: " << Song2.get_song() << ", width:  " << Song2.get_width() << endl;

    return 0;
}