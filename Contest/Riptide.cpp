#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while(t--){
        int a, b, c;
        cin>>a>>b>>c;

        if(a == b || b == c || a == c) {
            cout<<0<<endl;
            break;
        }

        int maxy = max({a, b, c});
        int miny = min({a, b, c});

        int mid = a + b + c - maxy - miny;

        cout<<min({maxy - mid, mid - miny})<<endl;
    }

    return 0;
}