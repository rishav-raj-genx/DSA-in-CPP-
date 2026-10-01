
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &a: v) cin>>a;

        sort(begin(v), end(v));

        int mex = -1;
        int c = 0;

        if(v[i] != 0) mex = 0;
        else {
            for(int i = 1; i < n; i++){
                if(v[i] - v[i-1] != 0){
                    c++;
                    mex = min(mex, c);
                    if(mex!=-1) break;
                }
            }
        }





    }
}
