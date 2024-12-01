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
				//Assert::AreSame(3, map.size());
				map.clear();
				Assert::AreSame(0, map.size());
			

			}
			TEST_METHOD(TestContainsKey) {
				TreeMap<int, std::string> map;
				map.put(1, "A");
				map.put(2, "B");
				map.put(3, "C");
				Assert::AreEqual(true, map.containsKey(2));
			}
			TEST_METHOD(TestGet) {

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
