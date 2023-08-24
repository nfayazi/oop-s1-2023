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
    MusicBox Box3 = MusicBox("Yo", 5);
    add_music_box(Box3);
    add_music_box(Box2);
    add_music_box(Box3);

    cout << "Shelf width: " << Shelf.get_width();
    cout << "Number of music boxes: " << Shelf.get_num_music_boxes();
    cout << "Contents: " << Shelf.get_contents() << endl;

    cout << "Song: "<< Box1.get_song() << ", Width of song: " << Box1.get_width() << endl;
    cout << "Song: "<< Box2.get_song() << ", Width of song: " << Box2.get_width() << endl;
    cout << "Song: "<< Box3.get_song() << ", Width of song: " << Box3.get_width() << endl;

    return 0;
}