#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	vector<vector<int>> Readed(16);
	ifstream myfile("t2input.txt");
	int Read;
	int k = 0;
	while (myfile >> Read) 
	{
		Readed[k/16].push_back(Read);
		k++;
	}
	int iMin, iMax;
	int iSum = 0;
	for (int i = 0; i< 16; i++)
	{
		iMin = Readed[i][0];
		iMax = Readed[i][0];
		for (int j = 0; j < 16; j++)
		{
			if (Readed[i][j] > iMax)
				iMax = Readed[i][j];
			if (Readed[i][j] < iMin)
				iMin = Readed[i][j];
		}
		iSum += (iMax - iMin);
	}
	cout<<iSum;
	return 0;
}