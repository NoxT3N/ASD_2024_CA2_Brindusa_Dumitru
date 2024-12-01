#pragma once
#include "BinaryTree.h"

template <class K, class V>
class TreeMap
{
	BinaryTree<std::pair<K, V>> tree;

public:
	TreeMap();
	void clear(); //Removes all entries from the Map
	bool containsKey(K key); //Returns true if this map contains a mapping for the specified key.
	V& get(K key); //Returns the value to which the specified key is mapped, or null if this map contains no mapping for the key.
	BinaryTree<K> keySet(); //Returns a Set view of the keys contained in this map.
	void put(K key, V value); //Associates the specified value with the specified key in this map
	int size();
	bool removeKey(K key);
	V& operator[](K key); //Returns the value to which the specified key is mapped, or null if this map contains no mapping for the key.
	~TreeMap();
};

template <class K, class V>
TreeMap<K, V>::TreeMap() {

}

template <class K, class V>
void TreeMap<K, V>::clear() {

}

template <class K, class V>
bool TreeMap<K, V>::containsKey(K key){
	
}

template <class K, class V>
V& TreeMap<K, V>::get(K key) {

}

template <class K, class V>
BinaryTree<K> TreeMap<K, V>::keySet() {

}

template <class K, class V>
void TreeMap<K, V>::put(K key, V value) {

}

template <class K, class V>
int TreeMap<K, V>::size() {

}

template <class K, class V>
bool TreeMap<K, V>::removeKey(K key) {

}

template <class K, class V>
V& TreeMap<K, V>::operator[](K key) {

}

template <class K, class V>
TreeMap<K, V>::~TreeMap() {
	clear();
}

