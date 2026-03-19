#include<bits/stdc++.h>
using namespace std;

bool slide(vector<int> &v, int t){

    int l = 0, r = l+1;

    int sum = 0;
    while(l<v.size()){
        sum  = v[l] + v[r];

        if(sum==t) return true;

        else if ( sum < t){
            r++;
        }

        else {
            l++;
            r = l+1;
        }
    }

    return false;
}

int main(){
    int n ; cin>>n;

    vector<int> v(n);
    for(auto &a:v) cin>>a;

    int t ;cin>>t;

    cout<<slide(v, t)<<endl;

    return 0;
}