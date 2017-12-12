//#include <fstream>
//#include <cassert>
//#include <sstream>
//#include <set>
//#include <string>
//
//using namespace std;
//
//bool IsValid(string Line)
//{
//	stringstream Str(Line);
//	string Word;
//	int WordCount = 0;
//	set<string> Set;
//	while (Str >> Word)
//	{
//		WordCount++;
//		Set.insert(Word);
//	}
//	return (WordCount == Set.size());
//}
//
//int main()
//{
//	string Line;
//	ifstream Stream("stream.txt");
//	int HowMany = 0;
//	while (getline(Stream, Line))
//	{
//		if (IsValid(Line))
//			HowMany++;
//	}
//	assert(IsValid("aa bb cc dd ee") == true);
//	assert(IsValid("aa bb cc dd ee aa") == false);
//	return 0;
//}