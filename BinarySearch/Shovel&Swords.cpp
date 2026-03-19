#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int T;
    cin>>T;

    while(T--){
        int a , b;

        auto Good = [&](long long rupees) -> bool {

            long long a1 = a, b1 = b;
            if(min(a1,b1) < rupees) return false;
            a1 -= rupees, b1 -= rupees;
            if(a1 + b1 >= rupees) return true;
            return false;
        };

        long long l = -1, r = 1;
        while (Good(r))r *= 2;
        while (l + 1 < r){
            long long m = l + (r - l) / 2;
            if (Good(m))l = m;
            else r = m;
        }
        cout<<1<<endl;
    }
    return 0;
}