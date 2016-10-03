/** Header file for an array-based implementation of the ADT bag.
@file ArrayBag.h */
# ifndef _ARRAY_BAG
# define _ARRAY_BAG
using namespace std;
# include "BagInterface.h"

template<class ItemType>
class ArrayBag : public BagInterface<ItemType> {
private:
    static const int DEFAULT_CAPACITY = 6; // Small size to test for a full bag
    ItemType items[DEFAULT_CAPACITY]; // Array of bag items
    int itemCount; // Current count of bag items
    int maxItems; // Max capacity of the bag
    // Returns either the index of the element in the array items that
    // contains the given target or -1, if the array does not contain
    // the target.
    int getIndexOf(const ItemType &target) const;

public:
    ArrayBag();

    int getCurrentSize() const;

    bool isEmpty() const;

    bool add(const ItemType &newEntry);

    bool remove(const ItemType &anEntry);

    void clear();

    bool contains(const ItemType &anEntry) const;

    int getFrequencyOf(const ItemType &anEntry) const;

    vector<ItemType> toVector() const;
};  // end ArrayBag

template<class ItemType>
int ArrayBag<ItemType>::getIndexOf(const ItemType &target) const {
    for (int i = 0; i < itemCount; i++) {
        if (items[i] == target) {
            return i;
        }
    }
    return -1;
}

template<class ItemType>
ArrayBag<ItemType>::ArrayBag() {
    itemCount = 0;
    maxItems = DEFAULT_CAPACITY;

}

template<class ItemType>
int ArrayBag<ItemType>::getCurrentSize() const {
    return itemCount;
}

template<class ItemType>
bool ArrayBag<ItemType>::isEmpty() const {
    if (itemCount == 0)
        return true;
    else
        return false;
}

template<class ItemType>
bool ArrayBag<ItemType>::add(const ItemType &newEntry) {
    if (itemCount < maxItems) {
        items[itemCount++] = newEntry;
        return true;
    } else {
        return false;
    }
}

template<class ItemType>
bool ArrayBag<ItemType>::remove(const ItemType &anEntry) {
    if (itemCount == 0) {
        return false;
    } else {
        itemCount--;
        return true;
    }
}

template<class ItemType>
void ArrayBag<ItemType>::clear() {
    itemCount = 0;
}

template<class ItemType>
bool ArrayBag<ItemType>::contains(const ItemType &anEntry) const {
    for (int i = 0; i < itemCount; i++) {
        if (items[i] == anEntry) {
            return true;
        }
    }
    return false;
}

template<class ItemType>
int ArrayBag<ItemType>::getFrequencyOf(const ItemType &anEntry) const {
    int count = 0;
    for (int i = 0; i < itemCount; i++) {
        if (items[i] == anEntry) {
            count++;
        }
    }
    return count;
}

template<class ItemType>
vector<ItemType> ArrayBag<ItemType>::toVector() const {
    vector<ItemType> v;
    for (int i = 0; i < itemCount; i++) {
        v.push_back(items[i]);
    }
    return v;
}

# endif