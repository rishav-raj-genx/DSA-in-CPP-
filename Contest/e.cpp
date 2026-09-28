
#include <bits/stdc++.h>
using namespace std;

int main(){

  int t; 
  cin>>t;

  while(t--){

    int n; 
    cin>>n;

    vector<int>v(n);

    for (auto &a : v) cin>>a;

    int l = 0,r = n-1;

    bool f1 = false, f2 = false;

    while(!f1 || !f2){
        if (v[l] != 1 && v[l] != -1) l++;
        else v[l] = 1, f1 = true;
        if (v[r] != 1 && v[r] != -1) r--;
        else v[r] = 1, f2 = true;
    }

    int m = l+1;

    while(m<r){
        if(v[m] == -1) v[m] = 0, m++;
        else m++;
    }
    
    for (auto &a : v) cout << a <<" ";
    cout << endl;
  }

  return 0;
}
