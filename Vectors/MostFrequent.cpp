#include <bits/stdc++.h>
using namespace std;

void most(vector<int> v, int n){

    int mos = -1, freq = 0;

    for(int i=0; i<n; i++){

        int cnt = 0;

        for (int j = 0; j<n; j++){

            if(v[i]==v[j]){
                cnt++;
                if(mos<cnt){
                    mos = cnt;
                    freq = v[i];
                }
            }
        }
    }
    cout<<freq<<endl;
}

int main(){
    int n, val;
    cin>>n;

    vector<int>v;

    for(int i=0; i<n; i++){
        cin>>val;
        v.push_back(val);
    }

    most(v, n);

    return 0;
}