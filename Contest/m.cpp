
#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    map<long long, long long>mp;



    while(t--){
        long long a, b;
        cin >> a >> b;

        mp[a]++;
        if(mp[b]!=0) mp[b+1]--;


    }

    long long maxy = 0;
    long long sum = 0;
    long long rooms = 1;

    for(auto &[key, val]: mp){
        sum += val;
        if(val == 0) rooms++;
        maxy = max(sum, maxy);   
    }

    cout<<rooms<<endl;

    return 0;
}
