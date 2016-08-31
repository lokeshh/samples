#include <iostream>
int main() {
  // fully qualified class name need to be used because we dont use the "using namespace std;" directive
  std::cout << "Size of char: " << sizeof(char) << " byte" << std::endl;
  std::cout << "Size of bool: " << sizeof(bool) << " bytes" << std::endl;
  std::cout << "Size of short: " << sizeof(short) << " bytes" << std::endl;
  std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
  std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
  std::cout << "Size of long: " << sizeof(long) << " bytes" << std::endl;
  std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
  return 0;
}