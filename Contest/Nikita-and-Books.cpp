#include<bits/stdc++.h>
using namespace std;

void solve(){
        int n;
        cin>>n;

        vector<long long>v(n);

        for(auto & a: v ) cin>>a;

        long long extra = 0;

    for (int i = 0; i < n; i++) {
        long long req = i + 1;
        
        extra += v[i];
        
        if (extra < req) {
            cout << "NO" << endl;
            return;
        }
        
        extra -= req;
    }

    cout << "YES" << endl;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}