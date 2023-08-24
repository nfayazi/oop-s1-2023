#include <iostream>
#include <string>
#include "StoreShelf.h"

StoreShelf::StoreShelf(){
    WidthShelf = 0;
    Boxes = new MusicBox[WidthShelf];
}
StoreShelf::StoreShelf(int width){
    WidthShelf = width;
    Boxes = new MusicBox[WidthShelf];

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
    if (MusicWidth <= WidthShelf){
        Boxes[MusicWidth] = a_music_box;
        MusicWidth = MusicWidth + a_music_box.get_width();
        return true;
    } else {
        return false;}

  };
StoreShelf::~StoreShelf(){
    delete[] Boxes;
};