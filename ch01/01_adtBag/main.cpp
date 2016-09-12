#include <iostream>
#include <string>
#include <set>
//#include "Bag.h"

using namespace std;

int main() {
    string clubs[] = {"Joker", "Ace", "Two", "Three",
                      "Four", "Five", "Six", "Seven",
                      "Eight", "Nine", "Ten", "Jack",
                      "Queen", "King"};
    // Create our bag to hold cards.
    //Bag <string> grabBag;

    set<string> grabBag;
    // Place six cards in the bag.
    grabBag.insert(clubs[1]);
    grabBag.insert(clubs[2]);
    grabBag.insert(clubs[4]);
    grabBag.insert(clubs[8]);
    grabBag.insert(clubs[10]);
    grabBag.insert(clubs[12]);
    // Get friends guess and check it.
    int guess = 0;
    while (!grabBag.empty()) {
        cout << "What is your guess?"
        << "(1 for Ace to 13 for King):";
        cin >> guess;
        // Is card in the bag?
        if (grabBag.find(clubs[guess])!=grabBag.end()) {
            // Good guess  remove card from the bag.
            cout << "You get the card!\n";
            grabBag.erase(clubs[guess]);
        }
        else {
            cout << "Sorry, card was not in the bag.\n";
        } // end if
    } // end while


    cout << "No more cards in the bag. Game over!\n";
    return 0;
}
