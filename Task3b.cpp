//#include <iostream>
//#include <cmath>
//#include <vector>
//
//using namespace std;
//
//int Distance(int number)
//{
//	int i = floor(sqrt(number));
//	if (i % 2 == 0)
//		i--;
//	int diff = number - i*i;
//	int result = abs((i + 1) / 2 - diff % (i + 1)) + (i + 1) / 2;
//	return result;
//}
//
//int Greater(int number)
//{
//	vector<int> Store{1, 1, 2, 4, 5, 10, 11, 23, 25};
//	int CurrentNumber = 0;
//	int Index = 8;
//	int Index2 = 1;
//	int side = 2;
//	while (CurrentNumber <= number)
//	{
//		CurrentNumber += Store[Index];
//		side = ceil(sqrt(Index));
//		if (side % 2 == 1)
//			side--;
//		if (Corner(Index, side))
//		{
//			if (Distance(Index + 1) > Distance(Index))
//				DoBottomRight();
//			else
//				DoCorner()
//		}
//		else
//			DoNormal();
//		Index++;
//	}
//}
//
//bool Corner(int Index, int side)
//{
//	return (Distance(Index) == side);
//}
//
//void DoNormal()
//{
//
//}
//
//void DoCorner()
//{
//
//}
//
//void DoBottomRight()
//{
//
//}
//bool 
//int main()
//{
//	
//	
//	return 0;
//}