#include <bits/stdc++.h>
using namespace std;

int maxi(vector<int>& v, int n, int i, int m){

    if(i==n) return m;

    m = max(m, v[i]);

    return maxi(v, n, ++i, m);
}


int main(){
    
    vector<int>v = {1,5,6,70,3,8,9,10};

    cout<<maxi(v, v.size(), 0, 0)<<endl;

    return 0;
}