/*
Majority Element: A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element).
*/

//Method 1, loop O(n*n）The basic solution is to have two loops and keep track of maximum count for all different elements. If maximum count becomes greater than n/2 then break the loops and return the element having maximum count. If maximum count doesn’t become more than n/2 then majority element doesn’t exist.


//METHOD 2 (Using Binary Search Tree)  map<int, int> numToCnt; Time:O(nlogn) 
//Space: O(n)


/*Method Moore’s Voting Algorithm 
1. Get an element occurring most of the time in the array. This phase will make sure that if there is a majority element then it will return that only.
2. Check if the element obtained from above step is majority element
*/

int findCandidate(vector<int> &vec)
{
    int key = vec[0];
    int cnt = 1;
    for (int i = 1; i < vec.size(); ++i) {
        if (vec[i] == key) {
            ++cnt;
        }else {
            --cnt;
            if (cnt == 0) {
                key = vec[i];
                cnt = 1;
            }
        }
    }
    return key;
}

bool isMajor(vector<int> vec, int can)
{
    int cnt = 0;
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] == can) 
           ++cnt;
        if (cnt > vec.size()/2) return true;
        else return false;
    }
}