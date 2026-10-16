#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int>v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    sort(v.begin(),v.end());
        int ops=min(k,n-1);
        long long ans = 0;
        for (int i=0;i<=ops;i++) {
            ans +=v[n-1-i];
        }
        cout <<ans<<endl;
	    
	}
	return 0;

}