#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,n,a[1000],b[1000];
	cin>>t;
	while(t--){
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    
	    sort(a,a+n);
	    sort(b,b+n);
	    
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=a[i]*b[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
