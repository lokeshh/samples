#include <iostream>
#include<stack>
#include<string>
#include "infixToPostfix.h"

using namespace std;

int main() {

    string expression;
    cout << "Enter Infix Expression \n";
    getline(cin, expression);
    string postfix = InfixToPostfix(expression);
    cout << "Output = " << postfix << "\n";
}
