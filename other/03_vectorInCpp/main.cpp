#include <iostream>
#include <vector>
using namespace std;
int main() {

  //lets define a vector v of floats
  vector<float> v;

  //You cannot use [] to initialize elements
  //v[2] = 15.5;
  v.assign(8, 15);
  v[2] = 15.5;
  v[3] = 16;

  cout << "capacity: " << v.capacity() << endl;
  cout << "size: " << v.size() << endl;

  //Using push_back() to add elements into the vector
  v.push_back(17.5);
  v.push_back(-4.2);
  v.push_back(-4.1);

  cout << "capacity: " << v.capacity() << endl;
  cout << "size: " << v.size() << endl;

  //shrink_to_fit()
  v.shrink_to_fit();

  cout << "capacity: " << v.capacity() << endl;
  cout << "size: " << v.size() << endl;

  //viewing elements inside the vector
  for (auto x:v) {

    cout << x << " ";
  }
  cout << endl;

  //pre-increment inside the following for loop does not change values inside the vector
  for (auto x:v) {
    cout << ++x << " ";
  }
  cout << endl;

  for (auto x:v) {
    cout << x << " ";
  }
  cout << endl;

  //pre-increment inside the following for loop changes values inside the vector
  for (auto &x:v) {
    cout << ++x << " ";
  }
  cout << endl;

  for (auto x:v) {

    cout << x << " ";
  }
  cout << endl;
  return 0;
}