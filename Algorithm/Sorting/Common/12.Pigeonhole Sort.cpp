/*
Pigeonhole sorting is a sorting algorithm that is suitable for sorting lists of elements where the number of elements and the number of possible key values are approximately the same.
It requires O(n + Range) time where n is number of elements in input array and ‘Range’ is number of possible values in array.

Working of Algorithm :

1. Find minimum and maximum values in array. Let the minimum and maximum values be ‘min’ and ‘max’ respectively. Also find range as ‘max-min-1’.

2. Set up an array of initially empty “pigeonholes” the same size as of the range.
3.Visit each element of the array and then put each element in its pigeonhole. An element arr[i] is put in hole at index arr[i] – min.
 
4.Start the loop all over the pigeonhole array in order and put the elements from non- empty holes back into the original array.
*/


#include <iostream>
#include <vector>

using namespace std;

void pigeonholeSort(vector<int> &arr) 
{
	int n = arr.size();
    //find the mininum and maximum vale in arr[]
    int minValue = arr[0], maxValue = arr[0];
    for (int i = 0; i < n; ++i) {
        if (arr[i] < minValue) minValue = arr[i];
        if (arr[i] > maxValue) maxValue = arr[i];
    }

    //traverse through input array and put element to the hole
    int range = maxValue - minValue + 1;
    vector<int> holes[range];
    for (int i = 0;  i < n; ++i) {
        holes[arr[i]-minValue].push_back(arr[i]);
    }

   //get the sorted elements 
    int index = 0;
    for (int i = 0; i < range; ++i) {
        vector<int>::iterator iter;
        for (iter = holes[i].begin(); iter != holes[i].end(); ++iter) {
            arr[index++] = *iter;
        }
    }
}

int main()
{
	vector<int> arr = {8, 3, 2, 7, 4, 6, 8};
    pigeonholeSort(arr);
	for (auto val :arr) {
		cout << val << " ";
	}
}


