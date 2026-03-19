#include <bits/stdc++.h>
using namespace std;

void remove(string s, int n){

    string se = {s[0]};

    for(int i = 1; i < n; i++){

        if(s[i] != s[i-1]){

            se.push_back(s[i]);

        } 
    }

    cout<<se<<endl;
}

int main(){
    string s;
    cin>>s;

    int n = s.length();

    remove(s, n);

    return 0;
}