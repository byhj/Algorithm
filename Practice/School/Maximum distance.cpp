#include<iostream>
#include<math.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int num;
	    double sum = 0;
	    cin>>num;
	    while(num != 0)
	    {
	        sum += 100.0/num;
	        num--;
	    }
	        
	    cout<<floor(sum)<<endl;
	}
	return 0;
}
