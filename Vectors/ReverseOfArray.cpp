// #include <iostream>
// #include <vector>
#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<float>v, int n){

    int l=0, r = n-1;

    while(l<r){
        
        swap(v[l], v[r]);
        l++;
        r--;
    }

    for(int i=0; i<n; i++){

        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n, val;
    cin>>n;
    
    vector<float>v={.1 , .2, .3, .4, .5};

    // for(int i=0; i<n; i++){
    //     cin>>;
    //     v.push_back(val);
    // }

    reverseArray(v, n);

    return 0;
}