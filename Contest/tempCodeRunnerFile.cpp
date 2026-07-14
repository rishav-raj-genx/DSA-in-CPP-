#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

    int maxi = 0;
    int cur = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '#') {
            cur++;
        } else {
            if (cur > 0) {
                int t = (cur + 1) / 2;
                maxi = max(maxi, t);
                cur = 0; 
            }
        }
    }

    if (cur > 0) {
        int t = (cur + 1) / 2;
        maxi = max(maxi, t);
    }

    cout << maxi << "\n";
    }
    return 0;
}