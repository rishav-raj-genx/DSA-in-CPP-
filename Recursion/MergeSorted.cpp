#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& v1, vector<int>& v2, vector<int>& v,
              int i, int j, int k) {

    if(i == v1.size()) {
        while(j < v2.size()) v[k++] = v2[j++];
        return;
    }

    if(j == v2.size()) {
        while(i < v1.size()) v[k++] = v1[i++];
        return;
    }

    if(v1[i] <= v2[j])
        v[k++] = v1[i++];
    else
        v[k++] = v2[j++];

    merge(v1, v2, v, i, j, k);
}


int main(){
    vector<int>v1 = {2,3,5,6,8,20};
    vector<int>v2 = {4, 13, 34, 45, 67};

    vector<int> v(v1.size()+v2.size(), 0);

    merge(v1, v2, v, 0, 0, 0);

    for(auto &a: v) cout<<a<<" ";
    cout<<endl;

    return 0;
}