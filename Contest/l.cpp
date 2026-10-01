
#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    map<long long, long long>mp;

    while(t--){
        int a, b;
        cin >> a >> b;

        mp[a]++;
        mp[b]--;
    }

    int maxy = 0;
    int sum = 0;


    for(auto &[key, val]: mp){
        sum += val; 
        maxy = max(sum, maxy);   
    }

    cout<<maxy<<endl;

    return 0;
}
