#include<bits/stdc++.h>
using namespace std;

int main(){
    int r1, c1;
    cin>>r1>>c1;
    vector<vector<int>>v(r1, vector<int>(c1));

   for(auto & a: v){
    for(auto & b: a)cin>>b;
   }

   int r2, c2;
   cin>>r2>>c2;

    vector<vector<int>>w(r2, vector<int>(c2));
   
   for(auto & a: w){
    for(auto & b: a)cin>>b;
   }

   if(c1 != r2) return 0;

    vector<vector<int>>x(r1, vector<int>(c2));


for(int i = 0; i < r1; i++){
    for(int j = 0; j < c2; j++){
        x[i][j]=0;
        for(int k = 0; k < r2; k++) x[i][j] += v[i][k] * w[k][j];
    }
}

 for(auto & a: x){
    for(auto & b: a)cout<<b<<" ";
    cout<<endl;
   }

   return 0;
}