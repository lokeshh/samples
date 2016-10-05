#include <iostream>
#include "StackInterface.h"
#include "ArrayStack.h"

using namespace std;

int main() {
    StackInterface<int> *stackPtr = nullptr;

    stackPtr = new ArrayStack<int>();

    stackPtr->push(33);
    stackPtr->push(44);
    stackPtr->push(55);
    stackPtr->push(66);

    cout<< "peeking:"<< stackPtr->peek()<<endl;

    cout<<"popping an element"<<endl;
    stackPtr->pop();

    cout<< "peeking again:"<< stackPtr->peek()<<endl;

    return 0;
}