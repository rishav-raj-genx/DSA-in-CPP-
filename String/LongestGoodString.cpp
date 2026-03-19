#include <bits/stdc++.h>
using namespace std;

int good(string s, int n){

    int maxi = 0;
    
    for(int j = 0; j<n; j++){
        int cnt = 0;
        for(int i = j; i<n; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                cnt++;
            } else {
                break;
            }
        }
        if(maxi<cnt){
            maxi = cnt;
        };
    }
    return maxi;
}

int main(){
    string s;
    cin>>s;

    int n = s.length();

    cout<<good(s, n)<<endl;

    return 0;   
}