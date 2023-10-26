#include <tuple>
#ifndef SPOT_H
#define SPOT_H

class Spot {
 protected:
  std::tuple<int, int> location;
  char category;

 public:
  Spot(int x, int y, char Category) {
    location = std::make_tuple(x, y);
    category = Category;
  }
  virtual ~Spot() {}
  std::tuple<int, int> getLoc() { return location; }
  char getCategory() { return category; }
  void setLoc(int x, int y) { location = std::make_tuple(x, y); }
  void setCategory(char Category) { category = Category; }
};

#endif  // SPOT_H