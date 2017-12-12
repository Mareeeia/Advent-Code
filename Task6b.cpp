#include <cassert>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;



void Rearr(vector<int> &Bank)
{
	int Index = distance(Bank.begin(), max_element(Bank.begin(), Bank.end()));
	int add = max(1, int(Bank[Index] / (Bank.size() - 1)));
	//Bank[Index] = Bank[Index] % (Bank.size() - 1);
	for (int i = 0; i < Bank.size(); i++)
		if (Bank[Index] - add >= 0)
			if (i + Index < Bank.size())
			{
				Bank[i + Index] += add;
				Bank[Index] -= add;
			}
			else
			{
				Bank[i + Index - Bank.size()] += add;
				Bank[Index] -= add;
			}
}

int Steps(vector<int> Bank)
{
	set<vector<int>> Set;
	int Size = 0;
	int Steps = 0;
	while (Size <= Set.size())
	{
		Rearr(Bank);
		Set.insert(Bank);
		Size++;
	}
	vector<int> Saved = Bank;
	Rearr(Bank);
	Size = 1;
	while (Bank != Saved)
	{
		Rearr(Bank);
		Size++;
	}
	return Size;
}
int main()
{
	vector<int> test{ 0, 2, 7, 0 };
	assert(Steps(test) == 4);
	vector<int> input{ 11,	11,	13,	7,	0,	15,	5,	5,	4,	4,	1,	1,	7,	1,	15,	11 };
	int result = Steps(input);
	return 0;
}