#include <bits/stdc++.h>
using namespace std;

bool custom(pair<string, int> a, pair<string, int> b){
    if (a.second != b.second)
        return a.second < b.second;
        return a.first > b.first;
}

int main (){
    int n;
    cin >> n;
    vector<pair<string, int>> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i].first >> vec[i].second;
    }

    sort(vec.begin(), vec.end(), custom);

    for(auto x : vec){
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}
