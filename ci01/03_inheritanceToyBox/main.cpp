//03_inheritanceToyBox
#include <iostream>
#include "PlainBox.h"
#include "ToyBox.h"

using namespace std;

int main() {
  PlainBox<double> obj1;
  PlainBox<double> obj2(4.33);

  double val1 = 1.44;
  obj1.setItem(val1);

  cout << "obj1:" << obj1.getItem() << endl;
  cout << "obj2:" << obj2.getItem() << endl;

  obj1.setItem(6.99);

  cout << "obj1:" << obj1.getItem() << endl;
  cout << "obj2:" << obj2.getItem() << endl;


  //Now using Integers
  PlainBox<int> obj3;
  PlainBox<int> obj4(4.33);

  int val3 = 1.44;
  obj3.setItem(val1);

  cout << "obj1:" << obj3.getItem() << endl;
  cout << "obj2:" << obj4.getItem() << endl;

  obj3.setItem(6.99);

  cout << "obj1:" << obj3.getItem() << endl;
  cout << "obj2:" << obj4.getItem() << endl;

  //TOYBOX
  string toy1 = "Awesome toy 1";
  string toy2 = "Awesome toy 2";

  ToyBox<string> myToyBox(toy1, RED);

  cout << "My Toy box now contains: " << myToyBox.getItem() << endl;
  myToyBox.setItem(toy2);
  cout << "My Toy box now contains: " << myToyBox.getItem() << endl;
  Color toyBoxColor = myToyBox.getColor();
  switch (toyBoxColor) {
    case Color::RED:
      cout << "Toy Box color is red" << endl;
      break;
    case Color::BLUE:
      cout << "Toy Box color is blue" << endl;
      break;
    case Color::GREEN:
      cout << "Toy Box color is green" << endl;
      break;
  }

  return 0;
}