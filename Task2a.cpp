#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int Diff(string row)
{
	int Read;
	vector<int> Line;
	istringstream Stg(row);
	int iMin, iMax;
	while(Stg >> Read)
	{
		Line.push_back(Read);
	}
	iMin = *(min_element(Line.begin(), Line.end()));
	iMax = *(max_element(Line.begin(), Line.end()));
	return iMax - iMin;
}
int main()
{
	string Line;
	vector<vector<int>> Readed(16);
	ifstream myfile("t2input.txt");
	int Read;
	int k = 0;
	int Sum = 0;
	while (getline(myfile, Line)) 
	{
		Sum += Diff(Line);
	}
	cout<<Sum;
	return 0;
}