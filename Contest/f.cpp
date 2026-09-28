

#include <bits/stdc++.h>
using namespace std;

int main(){

  int t; 
  cin>>t;

  while(t--){

    int n; 
    cin>>n;

    vector<int>v(3);
    int miny = INT_MAX;

    for (auto &a : v){
      cin>>a;
      miny = min(a, miny);
    } 

    cout<<n-miny<<endl;
    
  }

  return 0;
}
