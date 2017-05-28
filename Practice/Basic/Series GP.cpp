#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        float a,b,n,p;
        cin>>a>>b>>n;
        p=(pow((b/a),n-1));
        cout<<floor(a*p)<<endl;
    }
	return 0;
}
