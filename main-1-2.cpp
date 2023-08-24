#include <iostream>
#include <string>
#include "StoreShelf.h"

/*  StoreShelf();
  StoreShelf(int width);
  int get_width();
  int get_num_music_boxes();
  MusicBox *get_contents();
  bool add_music_box(MusicBox a_music_box);
  ~StoreShelf(); */

int main(){
    StoreShelf Shelf = StoreShelf(5);
    MusicBox Box1 = MusicBox("Blue", 3);
    MusicBox Box2 = MusicBox("No", 2);
    MusicBox* Boxes = Shelf.get_contents();

    cout << "Shelf width: " << Shelf.get_width();
    cout << "Number of music boxes: " << Shelf.get_num_music_boxes() << endl;
    
    Shelf.add_music_box(Box1);
    Shelf.add_music_box(Box2);

    for (int i = 0; i < Shelf.get_width(); i++) {
    cout << "Song: "<< i+ 1 << Boxes[i].get_song() << ", Width of song: " << Boxes[i].get_width() << endl;
    }

    return 0;
}