#include <bits/stdc++.h>
using namespace std;

void sub(string s,  int n){

    int l = 0;
    int r = n-1;

    for(int i=0; i<n; i++){
        for(int j = l; j < n; j++){
            cout<<s.substr(i, j-i+1)<<" ";
        }
            cout<<endl;
    l++;
    }
}

int main(){
    string s;
    cin>>s;

    int n = s.length();

    sub(s, n);

    return 0;
}