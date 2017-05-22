/*
Given a text txt[0..n-1] and a pattern pat[0..m-1], write a function search(char pat[], char txt[]) that prints all occurrences of pat[] in txt[]. You may assume that n > m.

Examples:

Input:  txt[] = "THIS IS A TEST TEXT"
        pat[] = "TEST"
Output: Pattern found at index 10

Input:  txt[] =  "AABAACAADAABAABA"
        pat[] =  "AABA"
Output: Pattern found at index 0
        Pattern found at index 9
        Pattern found at index 12
What is the best case?
The best case occurs when the first character of the pattern is not present in text at all.

txt[]  = "AABCCAADDEE"
pat[] = "FAA"
Run on IDE
The number of comparisons in best case is O(n).

What is the worst case ?
The worst case of Naive Pattern Searching occurs in following scenarios.
1) When all characters of the text and pattern are same.

txt[] = "AAAAAAAAAAAAAAAAAA"
pat[] = "AAAAA".
Run on IDE
2) Worst case also occurs when only the last character is different.

txt[] = "AAAAAAAAAAAAAAAAAB"
pat[] = "AAAAB"
Run on IDE
Number of comparisons in worst case is O(m*(n-m+1)). Although strings which have repeated characters are not likely to appear in English text, they may well occur in other applications (for example, in binary texts). The KMP matching algorithm improves the worst case to O(n). We will be covering KMP in the next post. Also, we will be writing more posts to cover all pattern searching algorithms and data structures.    
*/

#include <iostream>
#include <string>

using namespace std;

void search(string txt, string pat)
{
	int n = txt.size();
	int m = pat.size();
	for (int i = 0; i <= n-m; ++i) {
		int j;
		for (j = 0; j < m; ++j) {
			if (txt[i+j] != pat[j])
			   break;
		}
		if (j == m) {
			cout << "Index is :" << i << endl;
		}
	}
}

/* Driver program to test above function */
int main()
{
   string txt = "AABAACAADAABAAABAA";
   string pat = "AABA";
   search(txt, pat);
   return 0;
}
