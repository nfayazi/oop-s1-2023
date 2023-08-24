#include <iostream>
#include <string>
using namespace std;


class MusicBox {
    private:
    int Width;
    string Song;

    public:
    MusicBox();
    MusicBox(string songname, int width);
    string get_song(); 
    int get_width();
    ~MusicBox();
};