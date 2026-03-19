#include <bits/stdc++.h>
using namespace std;

string coin(long long a,long long b){

    if(a>b)swap(a,b);
    if((a+b) % 3 != 0 || 2*a < b) return "NO";
    else return "YES";

}

int main(){
    int T;
    cin>>T;

    while(T--){
    long long a, b;
    cin>>a>>b;

    cout<<coin(a, b)<<endl;
    }

    return 0;
}