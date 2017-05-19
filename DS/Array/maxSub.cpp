/*
Largest Sum Contiguous Subarray

Initialize:
    max_so_far = 0
    max_ending_here = 0

Loop for each element of the array
  (a) max_ending_here = max_ending_here + a[i]
  (b) if(max_ending_here < 0)
            max_ending_here = 0
  (c) if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
return max_so_far
*/

#include <climits>
#include <iostraem>

using namespace std;

int maxSub(vector<int> vec)
{
	if (vec.empty()) return INT_MIN;
	
	//for all negative
	int ans = vec[0];
	int curMax = vec[0];
	for (int i = 0; i < vec.size(); ++i) {
		curMax = max(curMax, curMax + vec[i]);
		ans = max(ans, curMax);
	}
	return ans;
}

int maxSubIndex(vector<int> vec, int &beg, int &end)
{
	beg = end = 0;
	int t = 0;
    int ans = INT_MIN;
    int curMax = 0;
    for (int i = 0; i < vec.size(); ++i) {
       curMax += a[i];
       if (ans < curMax) {
       	    ans = curMax;
       	    beg = t;
       	    end = i;
	   }
	   if (curMax < 0) {
	       curMax = 0;
	       t = i + 1;
	   }
	}
	return ans;
}
