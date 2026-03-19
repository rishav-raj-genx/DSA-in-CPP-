#include <bits/stdc++.h>
using namespace std;

string compress(string s, int n){

    string sn;
    int cnt = 1;

    for(int i = 0; i<n; i++){
        if(s[i] == s[i+1]) cnt++;

        else {
            sn = sn + s[i];
            sn = sn + to_string(cnt);
            cnt = 1;
        }
    }
    return sn;
}

int main(){
    string s;
    cin>>s;

    int n = s.length();

    cout<<compress(s, n)<<endl;

    return 0;
}