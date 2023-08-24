#include <iostream>
#include <string>
#include "StoreShelf.h"

StoreShelf::StoreShelf(){
    WidthShelf = 0;
}
StoreShelf::StoreShelf(int width){
    WidthShelf = width;
}
int StoreShelf:: get_width(){
    return WidthShelf;
  }
int StoreShelf:: get_num_music_boxes(){
    return MusicWidth;
  }
MusicBox* StoreShelf::get_contents(){
    return Boxes;
  }
bool StoreShelf::add_music_box(MusicBox a_music_box){
    if (MusicWidth < WidthShelf){
        Boxes[WidthShelf] = a_music_box;
        MusicWidth++;
        return true;
    }
    return false;
  };
  ~StoreShelf(){
    
  }