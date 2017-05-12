//Reverse a array Time: O(n)

void reverseArray(vector<int> &vec)
{
    int beg = 0;
    int end = vec.size()-1;
    while (beg < end) {
        swap(vec[beg++], vec[end--]);
    }
}

void reverseArray(vector<int> &vec, int beg, int end)
{
     if (beg < end) {
         swap(vec[beg], vec[end]);
         reverseArray(vec, ++beg, end--);
     }
}