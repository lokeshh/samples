/** @file ToyBox.h */
#ifndef _TOY_BOX
#define _TOY_BOX

#include "PlainBox.h"

enum Color {
    RED, BLUE, GREEN
}colors;

template<class ItemType>
class ToyBox : public PlainBox<ItemType> {
private:
    Color boxColor;

public:
    ToyBox();

    ToyBox(const Color &theColor);

    ToyBox(const ItemType &theItem, const Color &theColor);

    Color getColor() const;

};  // end ToyBox

template<class ItemType>
ToyBox<ItemType>::ToyBox() :PlainBox<ItemType>(){
    boxColor = BLUE;
}   // end default constructor

template<class ItemType>
ToyBox<ItemType>::ToyBox(const Color &theColor)  :PlainBox<ItemType>(){
    boxColor = theColor;
}   // end constructor

template<class ItemType>
ToyBox<ItemType>::ToyBox(const ItemType &theItem, const Color &theColor) :PlainBox<ItemType>(theItem){
    boxColor = theColor;
}   // end constructor

template<class ItemType>
Color ToyBox<ItemType>::getColor() const {
    return boxColor;
}   // end getColor

#endif