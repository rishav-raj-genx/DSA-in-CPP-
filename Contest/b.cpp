

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

    for(auto &a : v){
      if(a % 2 != 0) a = 1;
      else if((a/2)%2!=0) a = 0;
      else if((a/2)%2==0) a = 2;
    }

    long long c0 = 0, c1 = 0 , c2 = 0;

    for(auto &a : v){
      if(a == 0) c0++;
      else if(a == 1) c1++;
      else if(a == 2) c2++;
    }

    cout<<max({c0, c1, c2})<<endl;

}
  return 0;
}
