#include <iostream>
#include <string>
#include "MusicBox.h"

using namespace std;

MusicBox::MusicBox(){
    Width = 0;
    Song = "";
};
MusicBox:: MusicBox(string songname, int width){
    Song = songname;
    Width = width;
};
string MusicBox::get_song(){
        return Song;
};
int MusicBox::get_width(){
    return Width;
};
MusicBox::~MusicBox(){
    
}
