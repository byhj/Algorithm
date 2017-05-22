/*
Let us consider the Activity Selection problem as our first example of Greedy algorithms. Following is the problem statement.
You are given n activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.
Example:

Example 1 : Consider the following 3 activities sorted by
by finish time.
     start[]  =  {10, 12, 20};
     finish[] =  {20, 25, 30};
A person can perform at most two activities. The 
maximum set of activities that can be executed 
is {0, 2} [ These are indexes in start[] and 
finish[] ]

Example 2 : Consider the following 6 activities 
sorted by by finish time.
     start[]  =  {1, 3, 0, 5, 8, 5};
     finish[] =  {2, 4, 6, 7, 9, 9};
A person can perform at most four activities. The 
maximum set of activities that can be executed 
is {0, 1, 3, 4} [ These are indexes in start[] and 
finish[] ]
 
The greedy choice is to always pick the next activity whose finish time is least among the remaining activities and the start time is more than or equal to the finish time of previously selected activity. We can sort the activities according to their finishing time so that we always consider the next activity as minimum finishing time activity.

1) Sort the activities according to their finishing time
2) Select the first activity from the sorted array and print it.
3) Do following for remaining activities in the sorted array.

*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Activity {
    int start;
    int finish;
    bool operator < (const Activity &act) {
    	return this->finish < act.finish;
	}
};

void findMax(vector<Activity> actVec)
{
    sort(actVec.begin(), actVec.end());
    int i = 0;
    int cnt = 1;
    cout << actVec[i].start << " " << actVec[i].finish << endl;
    for (int j = 1; j < actVec.size(); ++j) {
        if (actVec[j].start >= actVec[i].finish) {
            cout << actVec[j].start << " " << actVec[j].finish << endl;
            i = j;
            ++cnt;
        }
    }
}

int main()
{
	    vector<Activity> arr = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}};
        findMax(arr);
        return 0;
}
