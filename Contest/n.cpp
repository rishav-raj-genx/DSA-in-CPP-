

#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; 
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        vector<long long> v(n);
        for(auto &a: v) cin >> a;

        vector<long long> cal(n-4);
        map<long long, long long> mp;
        
        long long ans = 0;

        for(int i = 0; i < n-4; i++){
            cal[i] = v[i] + v[i+2] - v[i+4];
            ans += mp[cal[i]];
            mp[cal[i]]++;
        }

        for(int i = 0; i < n-4; i++){
            if(i + 2 < n - 4 && cal[i] == cal[i+2]) ans--;
            if(i + 4 < n - 4 && cal[i] == cal[i+4]) ans--;
        }
        
        cout<<ans<<endl;
    }

    return 0;
}