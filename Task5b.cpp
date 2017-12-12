//#include <fstream>
//#include <vector>
//#include <cassert>
//
//using namespace std;
//
//bool JumpEscape(vector<int> &Maze, int &Loc)
//{
//	int nLoc = Loc + Maze[Loc];
//	if (Maze[Loc] < 3)
//		Maze[Loc]++;
//	else
//		Maze[Loc]--;
//	Loc = nLoc;
//	return (Loc >= Maze.size());
//
//}
//
//int Steps(vector<int> Maze)
//{
//	int i = 1;
//	int Loc = 0;
//	while (!JumpEscape(Maze, Loc))
//	{
//		i++;
//	}
//	return i;
//}
//int main()
//{
//	fstream file("maze.txt");
//	int Num;
//	vector<int> Maze;
//	while (file >> Num)
//	{
//		Maze.push_back(Num);
//	}
//	vector<int> test{ 0, 3, 1, 0, -3 };
//	assert(Steps(test) == 10);
//	int result = Steps(Maze);
//	return 0;
//}
