#include <bits/stdc++.h>
using namespace std;

void read(string s, int n) {

    int l = 0; 
    string sn;
    int i ;
    for(i = 0; i < n; i++){
        if(isupper(s[i])){
            cout<< s.substr(l, i - l)<<endl;
            l=i;
        }
    }
    cout<<s.substr(l, i-l)<<endl;
}

int main(){
    string s;
    cin>>s;

    int n = s.length();

    read(s, n);

    return 0;
}