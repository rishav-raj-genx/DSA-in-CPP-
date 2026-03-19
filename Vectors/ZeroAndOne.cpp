#include <bits/stdc++.h>
using namespace std;

void zeroOne(vector<int>v, int n){

    int l = 0, r = n-1;

    while(l<=r){

        if( v[l] == 0 && v[r] == 1){
            
        l++;
        r--;

        } else if (v[l] == 1 && v[r] == 0){
                   
            swap(v[l], v[r]);
            l++;
            r--;

        } else if( v[l] == 1 && v[r] != 0){

            r--;

        } else if( v[l] != 1 && v[r] == 0){

            l++;
            
        }
    }

    for(int i = 0; i<n; i++){

        cout<<v[i]<<" ";

    }
    cout<<endl;
}

int main(){
    int n, val;
    cin>>n;

    vector<int>v;

    for(int i = 0; i<n; i++){
        cin>>val;
        v.push_back(val);
    }

    zeroOne(v, n);

    return 0;
}