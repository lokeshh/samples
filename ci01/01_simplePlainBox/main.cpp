#include <iostream>

#include "PlainBox.h"

using namespace std;

int main() {
    PlainBox obj1;
    PlainBox obj2(4.33);

    double val1 = 1.44;
    obj1.setItem(val1);

    cout<< "obj1:"<<obj1.getItem()<<endl;
    cout<< "obj2:"<<obj2.getItem()<<endl;

    obj1.setItem(6.99);

    cout<< "obj1:"<<obj1.getItem()<<endl;
    cout<< "obj2:"<<obj2.getItem()<<endl;
    return 0;
}