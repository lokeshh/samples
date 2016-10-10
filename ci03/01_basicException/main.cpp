#include <iostream>
#include <exception>
// Look here for list of exceptions: http://en.cppreference.com/w/cpp/error/exception
// FAQS on Exeptions: https://isocpp.org/wiki/faq/exceptions

using namespace std;

void foo1();
void foo2();
void foo3();


void foo1() {
    cout << "Inside foo1";
    cout << endl;
    foo2();
    cout << "Exiting foo1";
}

void foo2() {
    cout << "Inside foo2";
    cout << endl;
    foo3();
    cout << "Exiting foo2";
}

void foo3() {
    cout << "Inside foo3";
    cout << endl;
    cout << "This function will cause the program to terminate by invoking an exception";
    cout << endl;
    throw exception();
    cout << "Exiting foo3";
}

class someClass {
public:
    int a;
    float b;

};

int main() {
    try {
        //TODO 1 - Throw exceptions here
        //throw 20;
    }
    catch (int e) {
        cout << "An exception occurred. Exception Nr. " << e << '\n';
    }
    catch (char param) {
        cout << "char exception";
    }
    catch (...) {
        cout << "default exception";
    }
    cout << endl;
    cout << endl;

    //TODO 2 - Test the new operator below
    //int *myarray = new int[100000000000000];

    //TODO 3 - Test the new operator failing inside a try catch
    //Exception in Memory allocation.
    try {
        int *myarray = new int[10000000000000];
        //throw bad_alloc();
    }
    catch (exception &e) {
        cout << "Catching standard exception: " << e.what() << endl;

    }

    cout << endl;
    cout << endl;

    //TODO 4 - call the breaking function
    //foo1();

    try {
        //TODO 4 - call the breaking function inside a try catch
        //foo1();
    } catch (exception &e) {
        cout << "This is not good: " << e.what() << endl;
    }

    cout << endl;
    cout << endl;
    cout << "END";


    return 0;
}