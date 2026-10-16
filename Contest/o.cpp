



#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<int> v(n);
	    for (auto &a :v){
	        cin>>a;
	    }
	    sort(v.begin(),v.end());
	    if(v[n-1]-v[1]<v[n-2]-v[0]) cout<<v[n-1]-v[1]<<endl;
	    else cout<<v[n-2]-v[0]<<endl;
	}
	return 0;

}