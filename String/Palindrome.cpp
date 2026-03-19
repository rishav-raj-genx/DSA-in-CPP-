#include <bits/stdc++.h>
using namespace std;

void palindrome (string s, int n){

    int i = 0, l = n - 1;

    while(n--){
        if(s[i] == s[l]){
            cout<<"true" << endl;
            break;
        } else {
            cout << "false" << endl;
            break;
        }
    }
}

int main(){
    string s;
    cin>>s;

    int n = s.length();

    palindrome(s, n);

    return 0;
}