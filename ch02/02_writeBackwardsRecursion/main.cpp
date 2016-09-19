//02_writeBackwardsRecursion
#include <iostream>

using namespace std;
string output = "";

void writeBackward(string s) {
    cout << "Entering witeBackward with input string: " << s << endl;
    cout << "AND with output string: " << output << endl;
    int length = s.size();
    if (length > 0) {
        cout << endl << "about to write a character into the output string " << endl << s.substr(length - 1, 1) << endl;
        output += s.substr(length - 1, 1);
        writeBackward(s.substr(0, length - 1));
        cout << endl << endl << "leaving writeBackward with output string " << output;
    }
}

int main() {
    writeBackward("cat");//will store the reversed string in the global string 'output'
    cout << endl << output << endl;
    return 0;
}