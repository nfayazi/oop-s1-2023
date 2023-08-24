#include <iostream>
#include <string>
#include "MusicBox.h"
using namespace std;

class StoreShelf {
 private:
 int WidthShelf;
 int MusicWidth;
 MusicBox* Boxes;

 public:
  StoreShelf();
  StoreShelf(int width);
  int get_width();
  int get_num_music_boxes();
  MusicBox *get_contents();
  bool add_music_box(MusicBox a_music_box);
  ~StoreShelf();
};