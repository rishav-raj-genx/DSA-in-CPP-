#include<bits/stdc++.h>

using namespace std;

int main() {

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &a : v) cin >> a;
    
    while(k--){
        int t;
        cin>>t;

        if(t > v[n-1]){
            cout<<"NO"<<endl;
            continue;
        }

    auto Good = [&] (int m) ->bool {
        if(v[m] >= t) return true;
        return false;
    };

    int l = -1, r = n-1;

    while(l + 1 < r){
        int m = (l + r) / 2;
        if(Good(m)) r = m;
        else l = m ;
    }

    if(t == v[r]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }

    return 0;
}