#include "MusicBox.h"
#ifndef MusicBox_h
#define MusicBox_h

#include <iostream>
#include <string>


class StoreShelf {
 private:
 int WidthShelf;
 int MusicWidth;
 MusicBox* Boxes;

 public:
  StoreShelf();
  StoreShelf(int width);
  int get_width();
  int get_music_width();
  int get_num_music_boxes();
  MusicBox *get_contents();
  bool add_music_box(MusicBox a_music_box);
  ~StoreShelf();
};

#endif