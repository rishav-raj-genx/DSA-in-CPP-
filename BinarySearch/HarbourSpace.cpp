#include <bits/stdc++.h>

using namespace std;

//O(n*log(n))

int main() {

    int t;
    cin>>t;
   
    while(t--){

    int a, b;
    cin>> a >> b;

    // define Good funtion
    auto Good = [&](long long time)->bool{
       
        if(2*a <= b) return true;
        if(2*b <= a) return true;

    };

    // O(log(n))
    long long l = 0, r = 1;
    while (!Good(r))r *= 2;
    while (l + 1 < r) {
        long long m = l + (r - l) / 2;
        if (Good(m))r = m;
        else l = m;
    }
}

    cout << l << endl;

    return 0;
}