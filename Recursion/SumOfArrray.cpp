#include <bits/stdc++.h>
using namespace std;

int maxi(vector<int>& v, int n, int i, int sum){

    if(i==n) return sum;

    sum += v[i];

    return maxi(v, n, ++i, sum);
}


int main(){
    
    vector<int>v = {1,5,6};

    cout<<maxi(v, v.size(), 0, 0)<<endl;

    return 0;
}