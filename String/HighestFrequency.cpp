#include <bits/stdc++.h>
using namespace std;

char freq(string s, int n){

    char ch;
    int fre[125] = {0};
    int max = 0;

    for(int i = 0; i<n; i++){

        fre[s[i]] += 1;

    }

    for(int i = 0; i<125; i++){

        if(fre[i]>max){

            max = fre[i];
            ch = char(i);

        }
    }

    return ch;
}

int main(){
    string s;
    cin>>s;

    int n = s.length();

    cout<<freq(s, n)<<endl;

    return 0;
}