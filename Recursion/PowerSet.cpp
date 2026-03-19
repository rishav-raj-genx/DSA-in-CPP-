#include <bits/stdc++.h>
using namespace std;

void allsubsets(int i, vector<int> &v,vector<int> &ans, vector<vector<int>> &all){

    if (i == v.size()) {
        all.push_back({ans});
        return;
        }

    ans.push_back(v[i]);

    allsubsets(i+1, v, ans, all);

    ans.pop_back();

    allsubsets(i+1, v, ans, all);

}

vector<vector<int>> subsets(int i,vector<int> &v,vector<int> &ans){

    vector<vector<int>> alls;

    allsubsets(i, v, ans, alls);

    return alls;
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