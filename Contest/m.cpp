
#include "bits/stdc++.h"
using namespace std;

int main(){

  int t; 
  cin>>t;

  while(t--){
    int n; cin>>n;
    string s; cin>>s;

    stack<int>st;
    vector<int>v;

    for(int i = 0; i<n; i++){
      if(s[i] == '1'){
        st.push(i+1);
      }
      else if (s[i] == '2'){
        if(!st.empty()){
          st.pop();
          v.push_back(i+1);
        }
      }
    }

    while(!st.empty()){
      v.push_back(st.top());
      st.pop();
    }
    sort(v.begin(),v.end());
    cout<<v.size()<<endl;

    for(auto &a:v) cout<<a<<" ";
    cout<<endl;
  }

  return 0;
}