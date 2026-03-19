#include <bits/stdc++.h>
using namespace std;

int repetition( string s){

    int cnt = 1;
    int maxi = 1;

    for( int  i =1; i<(int)s.length(); i++){

        if(s[i] == s[i-1]) cnt++;

        else maxi = max(cnt, maxi), cnt = 1;

    }
    maxi = max(maxi, cnt);

    return maxi;
}

int main(){
    string s;
    cin>>s;

    cout<<repetition(s)<<endl;

    return 0;
}