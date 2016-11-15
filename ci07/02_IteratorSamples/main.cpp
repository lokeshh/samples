#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>

using namespace std;

int main() {
  /**
   * VECTORS
   */
  std::vector<int> myvector;
  for (int i = 1; i <= 5; i++) myvector.push_back(i);

  std::cout << "myvector contains:";
  std::cout << '\n';

  for (int i = 0; i < myvector.size(); i++)
    std::cout << ' ' << myvector[i];
  std::cout << '\n';

  for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  for (auto it = myvector.begin(); it != myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';


  /**
   * MAPS
   */
  map<string, string> map1;
  for (int i = 1; i <= 5; i++) map1[to_string(i * 10)] = to_string(i * 20) + " String";
  //TODO : implement iterators for map<>

  /**
   * Unorderd Set
   */
  unordered_set<int> set1;
  for (int i = 1; i <= 5; i++) set1.insert(i);
  //TODO : implement iterators for unordered_set<>
  // for_each iterator

  //TODO find, count, advance, distance, equal

  //TODO Looping through chars in string


  return 0;
}