//#include <cmath>
//#include <cassert>
//#include <iostream>
//
//using namespace std;
//
//int Distance(int number)
//{
//	int i = floor(sqrt(number));
//	if (i % 2 == 0)
//		i--;
//	int diff = number - i*i;
//	int result = abs((i+1)/2 - diff % (i + 1)) + (i+1)/2;
//	return result;
//}
//
//#define TEST(actual, expected) { \
//	std::cout << #actual << " == " << (actual) << " == " << (expected) << "\n"; \
//	assert(actual == expected);\
//}
//
//int main()
//{
//	TEST(Distance(23), 2);
//	TEST(Distance(1024), 31);
//	TEST(Distance(347991), 480);
//	cout << Distance(277678) << "\n";
//	return 0; 
//}