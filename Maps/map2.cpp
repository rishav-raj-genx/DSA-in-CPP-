#include <bits/stdc++.h>
using namespace std;

void mapa(map<int,int>mp, int n){

    for(auto x : mp){
        cout<<x.first<<" "<<x.second<<endl;
    }

}

int main(){

    int n, a, b;
    cin>>n;

    map<int, int>mp;

    for(int i = 0; i<n; i++){
        cin>>a>>b;
        mp.insert({a, b});
    }

    mapa(mp, n);

    return 0;
}