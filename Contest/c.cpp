
#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;

  while(t--){
    long long n;
    cin>>n;

    vector<long long>v(n);
 
    for(auto &a: v) cin>>a;

    int l = 0, r = n - 1;

  while(l<r){
    if(v[l]!=1 || v[l]!=-1) l++;
    if(v[r]!=1 || v[r]!=-1) r--;

    if((v[l]!=1 || v[l]!=-1) && (v[r]!=1 || v[r]!=-1)){
      for(int i = l; i <= r; i++){
        if(v[i] == 1){
          if(i - l < r - i) l = i;
          else r = i;
        } 
      }
    }
  }

  for(int i = l; i <= r; i++){
    if(v[i] == -1) v[i] = 0;
  }

   for(int i = 0; i < n; i++){
      if(v[i] == -1 && (i != l || i != r)) v[i] = 0;
      else if( v[i] == -1 && (i == l || i == r)) v[i] = 1;
    }

  for(auto &a: v) cout<<a<<" ";
      cout<<endl;
}
  return 0;
}