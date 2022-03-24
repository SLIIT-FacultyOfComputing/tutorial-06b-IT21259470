#include "Box.h"
#include <iostream>
using namespace std;

// Implement setters and getters
void Box :: setLength(int l){
  Length = l;
}
void Box :: setWidth(int w) {
  Width = w;
}
void Box :: setHeight(int h) {
  Height = h;
}
int Box :: getLength(){
  return Length;
}
int Box :: getWidth(){
  return Width;
}
int Box :: getHeight(){
  return Height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
   return Length * Width * Height;
}
