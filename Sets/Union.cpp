#include <bits/stdc++.h>
using namespace std;

set<int> intersection(int n, vector<int>v1, int m, vector<int>v2){

    set<int>ans;
    for(int i = 0; i<n; i++){

            ans.insert(v1[i]);
        
    }
    for(int i = 0; i<m; i++){

            ans.insert(v2[i]);
        
    }
    return ans;
}

int main(){

    int n, val1;
    cin>>n;

    vector<int>v1;

    for(int i=0; i<n; i++){
        cin>>val1; 
        v1.push_back(val1);
    }

    int m, val2;
    cin>>m;

    vector<int>v2;

    for(int i=0; i<m; i++){
        cin>>val2; 
        v2.push_back(val2);
    }

    set<int>set =  intersection(n, v1, m, v2);

    for(auto x: set)cout<<x<<" ";
    cout<<endl;

    return 0;
}