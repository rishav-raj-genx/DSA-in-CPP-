#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto & a: v)cin>>a;
        
        for(auto & a : v) cout<<a;
        
    }
    return 0;
}