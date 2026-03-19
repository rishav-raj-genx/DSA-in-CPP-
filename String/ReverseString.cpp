#include <bits/stdc++.h>
using namespace std;

string rev(string s){
    int l = 0;
    int r = s.length();

    while(l<r){
        swap(s[l], s[r-1]);
        l++;
        r--;
    }

    return s;
}

int main(){
    string s;
    cin>>s;
    cout<<rev(s)<<endl;

    return 0;
}

