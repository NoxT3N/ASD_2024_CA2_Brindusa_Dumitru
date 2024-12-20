#pragma once
#include "BinaryTree.h"
#include "TreeMapPair.h"

template <class K, class V>
class TreeMap
{
	BinaryTree<TreeMapPair<K,V>> tree;

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
	tree.clear();
}

template <class K, class V>
bool TreeMap<K, V>::containsKey(K key){
	TreeMapPair<K, V> pair(key, V());

	try {
		tree.get(pair);
		return true;
	}
	catch (const std::logic_error&) {
		return false;
	}
}

template <class K, class V>
V& TreeMap<K, V>::get(K key) {
	TreeMapPair<K, V> pair(key, V());
	return tree.get(pair).value;
}

template <class K, class V>
BinaryTree<K> TreeMap<K, V>::keySet() {
	BinaryTree<K> kTree;

	TreeMapPair<K, V>* pairsArray = tree.toArray();
	int treeSize = tree.count();

	for (int i = 0; i < treeSize; i++) {
		kTree.add(pairsArray[i].key);
	}
	delete[] pairsArray;

	return kTree;
}

template <class K, class V>
void TreeMap<K, V>::put(K key, V value) {
	TreeMapPair<K, V> pair(key, value);
	tree.add(pair);
}
 
template <class K, class V>
int TreeMap<K, V>::size() {
	return tree.count();
}

template <class K, class V>
bool TreeMap<K, V>::removeKey(K key) {
	TreeMapPair<K, V> pair(key, V());
	return tree.remove(pair);
}

template <class K, class V>
V& TreeMap<K, V>::operator[](K key) {
	try {
		return get(key);
	}
	catch (const std::logic_error&) {
		throw std::logic_error("Key not found");
	}
}

template <class K, class V>
TreeMap<K, V>::~TreeMap() {
	clear();
}

