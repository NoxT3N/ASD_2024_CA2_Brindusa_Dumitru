#include "pch.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include "TreeMap.h"
#include "BinaryTree.h"

using namespace std;

int main() {
	TreeMap<char, BinaryTree<string>> map;


	ifstream file("Stage2Input.txt");

	if (!file.is_open()) {
		cerr << "Could not open the file!" << std::endl;
		return 1;
	}

	string word;
	
	while (getline(file, word)) {
		if (!word.empty()) {
			char firstLetter = tolower(word[0]);

			if (!map.containsKey(firstLetter)) {
				BinaryTree<string> tree;
				map.put(firstLetter, tree);
			}

			BinaryTree<string>& tree = map.get(firstLetter);
			tree.add(word);
		}
	}
	file.close();

	cout << "The list of letters for which there were words in the file\n" << endl;
	BinaryTree<char> keys = map.keySet();
	keys.printInOrder();

	char* keysArray = keys.toArray();

	for (int i = 0; i < keys.count(); ++i) {
		char key = keysArray[i];
		cout << "Words strating with " << key << ": " << endl;

		BinaryTree<string>& tree = map.get(key);
		tree.printInOrder();
		cout << endl;
	}
	
	delete[] keysArray;


	return 0;
}