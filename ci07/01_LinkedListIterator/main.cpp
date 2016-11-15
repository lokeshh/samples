//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

#include "LinkedList.h" // ADT list operations
#include <iostream>
#include <string>

using namespace std;

LinkedList<string> *setList(string data[], int numberOfEntries) {
    LinkedList<string> *listPtr = new LinkedList<string>();

    for (int i = 0; i < numberOfEntries; i++) {
        if (listPtr->insert(i + 1, data[i]))
            cout << "Insert " << listPtr->getEntry(i + 1)
            << " at position " << (i + 1) << endl;
        else
            cout << "Cannot insert " << data[i] << " at position " << (i + 1) << endl;
    }  // end for
    cout << endl;

    return listPtr;
}  // end setList

void displayList(LinkedList<string> *myListPtr) {
    int currentPosition = 1;
    while (currentPosition <= myListPtr->getLength()) {
        cout << myListPtr->getEntry(currentPosition) << " "; // O(n) operation
        currentPosition++;
    } // end while

    cout << endl;
}  // end displayList

void displayOneItem(string itemToDisplay) {
    cout << itemToDisplay << endl;
} // end displayOneItem

int main() {

    string myData[] = {"Jack", "Queen", "King", "Ace", "Joker", "Ace"};
    cout << "Creating a list:" << endl;
    LinkedList<string> *myListPtr = setList(myData, 6);

    cout << "The list contents using getEntry:" << endl;
    displayList(myListPtr);
    cout << endl;

    cout << "The list contents using the list's iterator:" << endl;
    LinkedIterator<string> currentIterator = myListPtr->begin();
    while (currentIterator != myListPtr->end()) {
        cout << *currentIterator << " "; // O(1) operation
        ++currentIterator;
    }  // end while
    cout << endl << endl;


    cout << "The list contents using the list's iterator and a for_each loop:" << endl;
    for_each(myListPtr->begin(), myListPtr->end(), displayOneItem);
    cout << endl << endl;

    cout << "Find the entry \"Ace\" in the list:" << endl;
    LinkedIterator<string> myCard = find(myListPtr->begin(), myListPtr->end(), "Ace");
    cout << *myCard << endl;

    cout << "Count the number of occurrences of \"Ace\" in the list:" << endl;
    long aceCount = count(myListPtr->begin(), myListPtr->end(), "Ace");
    cout << aceCount << endl << endl;

    // Iterator to first position in list
    LinkedIterator<string> myIterator = myListPtr->begin();

    // Advance from first position to fifth (4 positions ahead)
    advance(myIterator, 4);
    cout << "The entry at position 5 is " << *myIterator << "." << endl << endl;

    cout << "The number of entries from the iterator's current position to the end of the list is ";
    long numberRemaining = distance(myIterator, myListPtr->end());
    cout << numberRemaining << "." << endl << endl;

    cout << "Creating another list:" << endl;
    string yourData[] = {"Jack", "Queen", "King", "Ace", "Joker", "Ace"};
    LinkedList<string> *yourListPtr = setList(yourData, 6);

    cout << "The first list contains:" << endl;
    displayList(myListPtr);
    cout << endl;

    cout << "The second list contains:" << endl;
    displayList(yourListPtr);
    cout << endl;

    /*
        bool same = equal(myListPtr->begin(), myListPtr->end(), yourListPtr->begin());

        if (same)
           cout << "The lists are equal.  :-)" << endl;
        else
           cout << "The lists are NOT equal.  :-(" << endl;

         cout << "\nAfter removing the second entry from the second list:" << endl;
        myListPtr->remove(2);
        same = equal(myListPtr->begin(), myListPtr->end(), yourListPtr->begin());
        if (same)
           cout << "The lists are equal.  :-(" << endl;
        else
           cout << "The lists are NOT equal.  :-)" << endl;
        */
    return 0;
}  // end main

/*
 Creating a list:
 Insert Jack at position 1
 Insert Queen at position 2
 Insert King at position 3
 Insert Ace at position 4
 Insert Joker at position 5
 Insert Ace at position 6
 
 The list contents using getEntry:
 Jack Queen King Ace Joker Ace
 
 The list contents using the list's iterator:
 Jack Queen King Ace Joker Ace
 
 The list contents using the list's iterator and a for_each loop:
 Jack
 Queen
 King
 Ace
 Joker
 Ace
 
 
 Find the entry "Ace" in the list:
 Ace
 Count the number of occurrences of "Ace" in the list:
 2
 
 The entry at position 5 is Joker.
 
 The number of entries from the iterator's current position to the end of the list is 2.
 
 Creating another list:
 Insert Jack at position 1
 Insert Queen at position 2
 Insert King at position 3
 Insert Ace at position 4
 Insert Joker at position 5
 Insert Ace at position 6
 
 The first list contains:
 Jack Queen King Ace Joker Ace
 
 The second list contains:
 Jack Queen King Ace Joker Ace
 
 The lists are equal.  :-)
 
 After removing the second entry from the second list:
 The lists are NOT equal.  :-)
 
*/
