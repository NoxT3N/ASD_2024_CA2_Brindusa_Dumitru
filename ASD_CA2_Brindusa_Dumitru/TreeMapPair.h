#pragma once

template <class K, class V>
class TreeMapPair
{
public:
	K key;
	V value;

	TreeMapPair() {
		this->key = K();
		this->value = V();
	}

	TreeMapPair(K key, V value) {
		this->key = key;
		this->value = value;
	}

	bool operator<(const TreeMapPair<K, V>& other) const {
		return key < other.key;
	}

	bool operator>(const TreeMapPair<K, V>& other) const {
		return key > other.key;
	}

	bool operator==(const TreeMapPair<K, V>& other) const {
		return key == other.key;
	}
};

