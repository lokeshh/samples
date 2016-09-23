/**
 * POINTERS TUTORIAL
 * CREDIT: tutorials point c++ pointer tutorials
 * http://www.tutorialspoint.com/cplusplus/cpp_pointers.htm
 */
#include <iostream>

#define MAX 3
using namespace std;

namespace example1 {
void example() {
  //pointers basic 1
  //TODO - create var1 of type int
  //TODO - create a character array var2 that can hold 10 elements
  int var1;
  char var2[10];

  cout << "Size of var1 variable: ";
  cout << sizeof(var1) << endl;

  cout << "Size of var2 variable: ";
  cout << sizeof(var2) << endl;

  cout << "Address of var1 variable: ";
  cout << &var1 << endl;

  cout << "Address of var2 variable: ";
  cout << &var2 << endl;

}
}

namespace example2 {
void example() {
  //pointers basic 2
  int var = 20;   // actual variable declaration.
  int *ip;        // pointer variable

  ip = &var;       // store address of var in pointer variable

  cout << "Value of var variable: ";
  cout << var << endl;

  // print the address stored in ip pointer variable
  cout << "Address stored in ip variable: ";
  cout << ip << endl;

  // access the value at the address available in pointer
  cout << "Value of *ip variable: ";
  cout << *ip << endl;

  cout << "Address of *ip variable: ";
  cout << &ip << endl;

  int *ptr = nullptr;

  cout << "The value of ptr is " << ptr;
}
}

namespace example3 {
void example() {

  //pointer addition
  int var[MAX] = {10, 100, 200};
  int *ptr;

  // let us have array address in pointer.
  ptr = var;
  for (int i = 0; i < MAX; i++) {
    cout << "Address of var[" << i << "] = ";
    cout << ptr << endl;

    cout << "Value of var[" << i << "] = ";
    cout << *ptr << endl;

    // point to the next location
    ptr++;
  }
}
}

namespace example4 {
void example() {

  //pointer subtraction
  int var[MAX] = {10, 100, 200};
  int *ptr;

  // let us have address of the last element in pointer.
  ptr = &var[MAX - 1];
  for (int i = MAX; i > 0; i--) {
    cout << "Address of var[" << i << "] = ";
    cout << ptr << endl;

    cout << "Value of var[" << i << "] = ";
    cout << *ptr << endl;

    // point to the previous location
    ptr--;
  }
}
}

namespace example5 {
void example() {

  //comparing pointers

  int var[MAX] = {10, 100, 200};
  int *ptr;

  // let us have address of the first element in pointer.
  ptr = var;
  int i = 0;
  while (ptr <= &var[MAX - 1]) {
    cout << "Address of var[" << i << "] = ";
    cout << ptr << endl;

    cout << "Value of var[" << i << "] = ";
    cout << *ptr << endl;

    // point to the previous location
    ptr++;
    i++;
  }
}
}

namespace example6 {
void example() {

  //incorrect pointers
  int var[MAX] = {10, 100, 200};

  for (int i = 0; i < MAX; i++) {
    *var = i;    // This is a correct syntax
    //var++;       // This is incorrect.
  }
  *(var + 2) = 500;
  cout<<*(var+2)<<endl;
}
}

namespace example7 {
void example() {
  //simple array revisted

  int var[MAX] = {10, 100, 200};

  for (int i = 0; i < MAX; i++) {
    cout << "Value of var[" << i << "] = ";
    cout << var[i] << endl;
  }
}
}

namespace example8 {
void example() {

  //array of pointers
  int var[MAX] = {10, 100, 200};
  int *ptr[MAX];

  for (int i = 0; i < MAX; i++) {
    ptr[i] = &var[i]; // assign the address of integer.
  }
  for (int i = 0; i < MAX; i++) {
    cout << "Value of var[" << i << "] = ";
    cout << *ptr[i] << endl;
  }
}
}

namespace example9 {
void example() {

  //array of names

  char *names[MAX] = {
      "Jack A",
      "Jill B",
      "John C",
  };

  for (int i = 0; i < MAX; i++) {
    cout << "Value of names[" << i << "] = ";
    cout << names[i] << endl;
  }
}
}

namespace example10 {
void example() {
  int var;
  int *ptr;
  int **pptr;
  int ***ppptr;

  var = 3000;

  // take the address of var
  ptr = &var;

  // take the address of ptr using address of operator &
  pptr = &ptr;

  ppptr = &pptr;

  // take the value using pptr
  cout << "Value of var :" << var << endl;
  cout << "Value available at *ptr :" << *ptr << endl;
  cout << "Value available at **pptr :" << **pptr << endl;

}
}

namespace example11 {
//passing pointers to functions
void getSeconds(unsigned long *par);

void getSeconds(unsigned long *par) {
  // get the current number of seconds
  *par = time(NULL);
  return;
}

void example() {
  unsigned long sec;

  getSeconds(&sec);

  // print the actual value
  cout << "Number of seconds :" << sec << endl;

}
}

namespace example12 {
//More pointers to functions
double getAverage(int *arr, int size);

double getAverage(int *arr, int size) {
  int i, sum = 0;
  double avg;

  for (i = 0; i < size; ++i) {
    sum += arr[i];
  }

  avg = double(sum) / size;

  return avg;
}

void example() {

  // an int array with 5 elements.
  int balance[5] = {1000, 2, 3, 17, 50};
  double avg;

  // pass pointer to the array as an argument.
  avg = getAverage(balance, 5);

  // output the returned value
  cout << "Average value is: " << avg << endl;

}
}

namespace example13 {
//return pointer to function

// function to generate and retrun random numbers.
int *getRandom() {
  static int r[10];

  // set the seed
  srand((unsigned) time(NULL));
  for (int i = 0; i < 10; ++i) {
    r[i] = rand();
    cout << r[i] << endl;
  }

  return r;
}

// function to call above defined function.

void example() {
  // a pointer to an int.
  int *p;

  p = getRandom();
  for (int i = 0; i < 10; i++) {
    cout << "*(p + " << i << ") : ";
    cout << *(p + i) << endl;
  }

}
}

int main() {

  example1::example();
  //example2::example();
  //example3::example();
  //example4::example();
  //example5::example();
  //example6::example();
  //example10::example();
  //example10::example();
  //example11::example();
  //example12::example();
  //example13::example();


  return 0;
}