//
// Created by Mark Volkov on 11/15/17.
//
#include "ArrayMap.h"
#include "Item.h"

template <class K, class V>
HashMap<K, V>::HashMap() {
    this->items = new ArrayList<Item<K, V>*>();
};

template <class K, class V>
V HashMap<K, V>::put(K key, V value) {
    Item<K, V>* newItem = new Item<K, V>(key, value);
    items->insertAtEnd(newItem);
    return value;
}

template <class K, class V>
V HashMap<K, V>::get(K key) {
    for (int i = 0; i < this->items->itemCount(); i++) {
        Item<K, V>* item = this->items->getValueAt(i);
        if (item->getKey()== key) {
            return item->getValue();
        }
    }
    throw std::out_of_range("Element doesn't exist");
}

template <class K, class V>
ArrayList<Item<K, V>*>* HashMap<K, V>::itemSet() {
    return this->items;
}
