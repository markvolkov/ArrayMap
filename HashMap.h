//
// Created by Mark Volkov on 11/15/17.
//

#ifndef HASHMAP_HASHMAP_H
#define HASHMAP_HASHMAP_H

#include "Map.h"
#include "ArrayList.h"
#include "Item.h"

template <class K, class V>
class HashMap : public Map<K, V> {

private:
    ArrayList<Item<K, V>*>* items;
public:
    HashMap();
    V put(K key, V value);
    V get(K key);
    ArrayList<Item<K,V>*>* itemSet();


};

#include "HashMap.inl"
#endif //HASHMAP_HASHMAP_H
