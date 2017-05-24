#include<iostream>
using namespace std;
int main()
 {
	//code
	int t,a,b,c,d,e,f,res;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c>>d>>e>>f;
	    res=~a&b|c&d|e&~f;
	    cout<<res<<endl;
	}
	return 0;
}
