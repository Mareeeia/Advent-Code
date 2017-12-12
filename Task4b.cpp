//#include <fstream>
//#include <algorithm>
//#include <cassert>
//#include <sstream>
//#include <vector>
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
//	set<vector<char>> Set;
//	while (Str >> Word)
//	{
//		WordCount++;
//		int i = 0;
//		vector<char> Dummy;
//		while (Word[i] != '\0')
//		{
//			Dummy.push_back(Word[i]);
//			i++;
//		}
//		sort(Dummy.begin(), Dummy.end());
//		Set.insert(Dummy);
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
//	assert(IsValid("iiii oiii ooii oooi oooo") == true);
//	return 0;
//}