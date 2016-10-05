#include <iostream>
#include "StackInterface.h"
#include "LinkedStack.h"

using namespace std;

int main() {
    StackInterface<int> *stackPtr = nullptr;

    stackPtr = new LinkedStack<int>();

    stackPtr->push(33);
    //stackPtr->push(44);
    //stackPtr->push(55);
    //stackPtr->push(66);


    try {
        cout << "peeking:" << stackPtr->peek() << endl;

        cout << "popping an element" << endl;
        stackPtr->pop();

        cout << "peeking again:" << stackPtr->peek() << endl;

    } catch (PrecondViolatedExcep &e) {
        cout << endl;
        cout << endl;
        cout << "Our custom catch: " << e.what();

    } catch (exception &e) { cout << "The default catch: " << e.what(); }
    return 0;
}