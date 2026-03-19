#include<bits/stdc++.h>
using namespace std;

void DnF(vector<int>& v, int l, int mid, int r){

    if(mid>r) return;

    if(v[mid] == 1) mid++;
    else if(v[mid] == 0){
        swap(v[l], v[mid]);
        l++;
        mid++;
    } else {
        swap(v[r], v[mid]);
        r--;
    }

    return DnF(v, l, mid, r);
}

int main(){
    vector<int> v = {0,1,2,0,0,0,2,1,2,1,2,0};

    DnF(v, 0, 0, v.size()-1);

    for(auto &a: v) cout<<a<<"";
    cout<<endl;

    return 0;
}