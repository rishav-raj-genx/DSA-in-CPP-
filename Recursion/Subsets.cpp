#include <bits/stdc++.h>
using namespace std;

void subsets(int i, vector<int> &v,vector<int> &ans){

    if (i == v.size()) {
        for(auto x : ans) {
            cout<< x <<" ";
            }
            cout<<endl;
            return ;
        }
    

    ans.push_back(v[i]);

    subsets(i+1, v, ans);

    ans.pop_back();

    subsets(i+1, v, ans);

}

int main(){
    int n, val;
    cin>>n;

    vector<int>v;
    vector<int>ans;

    for(int i = 0; i<n; i++){
        cin>>val;
        v.push_back(val);
    }

    subsets(0, v, ans);

    return 0;
}