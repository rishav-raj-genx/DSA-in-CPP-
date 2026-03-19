#include<bits/stdc++.h>
using namespace std;

void sort(vector<int>& v, int mid, int l, int r){

    vector<int>vv;

    while(l <= mid && mid <= r){

        if(v[l] < v[mid]) {
            vv.push_back(v[l]);
            l++;
        } else {
            vv.push_back(v[mid]);
            mid++;
        }

    }

    while(l <= mid) {
        vv.push_back(v[l]);
        l++;
    }

    while(mid <= r){
        vv.push_back(v[mid]);
        mid++;
    }
}

void merge(vector<int>& v, int l, int r){

    if(l>=r) return ;

    if(l<r){
        int mid = l + (r-l) / 2;

        merge(v, l , mid);
        merge(v, mid+1, r);

        sort(v, mid, l, r);
    }
}

int main(){
    vector<int> v = {50,40,30,20,10};
    int n = v.size();

    merge(v, 0, n-1);

for(auto &a: v) cout<<a<<" ";
cout<<endl;

    return 0;
}