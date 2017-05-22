/*
A Maze is given as N*N binary matrix of blocks where source block is the upper 
left most block i.e., maze[0][0] and destination block is lower rightmost block 
i.e., maze[N-1][N-1]. A rat starts from source and has to reach destination. 
The rat can move only in two directions: forward and down.

In the maze matrix, 0 means the block is dead end and 1 means the block can be
used in the path from source to destination. Note that this is a simple version
of the typical Maze problem. For example, a more complex version can be that the
rat can move in 4 directions and a more complex version can be with limited number of moves.

while there are untried paths
{
   generate the next path
   if this path has all blocks as 1
   {
      print this path;
   }
}
Backtrackng Algorithm

If destination is reached
    print the solution matrix
Else
   a) Mark current cell in solution matrix as 1. 
   b) Move forward in horizontal direction and recursively check if this 
       move leads to a solution. 
   c) If the move chosen in the above step doesn't lead to a solution
       then move down and check if  this move leads to a solution. 
   d) If none of the above solutions work then unmark this cell as 0 
       (BACKTRACK) and return false.
*/ 
#include <iostream>

using namespace std;

const int N = 4;
bool isSafe(int maze[N][N], int x, int y)
{
	if (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1)
	  return true;
    else 
      return false;
}

bool solveMazeBack(int maze[N][N], int x, int y, int sol[N][N])
{
	//if the goal
	if (x == N-1 && y == N-1) {
		sol[x][y] = 1;
		return true;
	}
	
	if (isSafe(maze, x, y)) {
		sol[x][y] = 1;
		//forward
		if (solveMazeBack(maze, x+1, y, sol)) return true;
		if (solveMazeBack(maze, x, y+1, sol)) return true;
		
		//reset for backtrack
		sol[x][y] = 0;
		return false;
	}
	return false;
}
bool solveMaze(int maze[N][N]) {
	int sol[N][N] = { {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
    if (!solveMazeBack(maze, 0, 0, sol)) {
    	cout << "Not exist" << endl;
	}else {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; ++j) {
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}
	}
}
// driver program to test above function
int main()
{
    int maze[N][N]  =  { {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };
 
    solveMaze(maze);
    return 0;
}


