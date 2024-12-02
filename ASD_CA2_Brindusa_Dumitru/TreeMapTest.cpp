#include "pch.h"
#include "CppUnitTest.h"
#include "TreeMap.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TreeMapTest {
	TEST_CLASS(TestTreeMap) {
		public:
			TEST_METHOD(TestClear) {
				TreeMap<int, std::string> map;
				map.put(1, "A");
				map.put(2, "B");
				map.put(3, "C");
		
				map.clear();
				Assert::AreEqual(0, map.size());
			

			}
			TEST_METHOD(TestContainsKey) {
				TreeMap<int, std::string> map;
				map.put(1, "A");
				map.put(2, "B");
				map.put(3, "C");
				Assert::AreEqual(true, map.containsKey(2));
			}
			TEST_METHOD(TestGet) {
				TreeMap<int, int> map;
				map.put(1, 10);
				map.put(2, 20);
				map.put(3, 30);

				Assert::AreEqual(20, map.get(2));
			}
			TEST_METHOD(TestKeySet) {
				TreeMap<int, std::string> map;
				map.put(1, "A");
				map.put(2, "B");
				map.put(3, "C");

				BinaryTree<int> keys = map.keySet();
				int* kArray = keys.toArray();
				int expectedKeys[] = { 1,2,3 };

				for (int i = 0; i < keys.count(); i++) {
					Assert::AreEqual(expectedKeys[i], kArray[i]);
				}

				delete[] kArray;
			}
			TEST_METHOD(TestSize) {
				TreeMap<int, std::string> map;
				map.put(1, "A");
				map.put(2, "B");
				map.put(3, "C");

				Assert::AreEqual(3, map.size());
			}
			TEST_METHOD(TestRemoveKey) {
				TreeMap<int, std::string> map;
				map.put(1, "A");
				map.put(2, "B");
				map.put(3, "C");

				Assert::IsTrue(map.removeKey(2));
				Assert::AreEqual(2, map.size());
				Assert::IsFalse(map.containsKey(2));

			}
			TEST_METHOD(TestOperator) {
				TreeMap<int, std::string> map;
				map.put(1, "A");
				map.put(2, "B");
				map.put(3, "C");
				bool eThrown = false;
				std::string testV;

				try {
					testV = map[3];
				}
				catch (const std::logic_error& ) {
					eThrown = true;
				}

				Assert::IsFalse(eThrown);
				Assert::AreEqual(std::string("C"), testV);

			}

	};
}
