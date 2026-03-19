#include<bits/stdc++.h>
using namespace std;

int main(){
    int r, c;
    cin>>r>>c;
    vector<vector<int>>v(r, vector<int>(c));
    for(auto & a:v) for(auto & b: a) cin>>b;
    for(auto & a:v) {for(auto & b: a) {
        cout<<b<<" ";
    }cout<<endl;}

    vector<vector<int>>w(c, vector<int>(r));

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            w[j][i] = v[i][j];
        }
    }
    for(auto & a:w) {for(auto & b: a){
        cout<<b<<" ";
    }cout<<endl;}
    return 0;
}