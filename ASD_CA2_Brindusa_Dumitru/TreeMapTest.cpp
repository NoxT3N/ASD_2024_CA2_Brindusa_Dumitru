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

			}
			TEST_METHOD(TestPut) {

			}
			TEST_METHOD(TestSize) {

			}
			TEST_METHOD(TestRemoveKey) {

			}
			TEST_METHOD(TestOperator) {

			}

	};
}
