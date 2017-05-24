#include <iostream>
#include <vector>

using namespace std;

void genCom(vector<int> &vec)
{
    int n = vec.size()-1;
    for (int i = 2; i*i <= n; ++i) {
        if (!vec[i]) continue;
        for (int j = i*i; j <= n; j += i) {
            vec[j] = 0;
        }
    }
}
int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n+1, 1);
	    genCom(vec);
	    for (int i = 4; i <= n; ++i) {
	        if (vec[i] == 0) {
	            cout << i << " ";
	        }
	    }
	    cout << endl;
	}
	return 0;
}

/*
#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    for(int i=4;i<=n;i++){
	        if(((i%2==0)||(i%3==0)||(i%5==0)||(i%7==0))&&((i!=5)&&(i!=7))){
	            cout<<i<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}

*/
