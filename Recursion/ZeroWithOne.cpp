#include <bits/stdc++.h>
using namespace std;


void zero(vector<int>& v, int l , int r ){

    if(l >= r) return;

    if(v[l] == 1 && v[r] == 0){
        swap(v[l], v[r]);
        l++;
        r--;
    }
    else if (v[l] == 0){
        l++;
    }
    else if (v[r] == 1){
        r--;
    }

    zero(v, l, r);
}


int main(){
    vector<int> v = {0,1,0,1,0,0,0,1,1,0};

    zero(v, 0, v.size()-1);

    for(auto &a: v) cout<<a<<" ";
    cout<<endl;

    return 0;
}