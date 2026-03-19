#include <bits/stdc++.h>
using namespace std;

void evenOdd(vector<int>v, int n){

    sort(v.begin(), v.end());

    for(int i = 0; i<n; i++){

        for(int j = i + 1; j<n; j++){

            if(v[i]%2!=0 && v[j]%2==0){

                swap(v[i], v[j]);

            }
        }
        cout<<v[i]<<" ";
    }
}

int main(){
    int n, val;
    cin>>n;

    vector<int>v;

    for(int i=0; i<n; i++){
        cin>>val;
        v.push_back(val);
    }

    evenOdd(v, n);

    return 0;
}