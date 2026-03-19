// https://cses.fi/problemset/task/1620

#include <bits/stdc++.h>

using namespace std;
//O(n*log(n))

int main() {

    long long w, h, n;
    cin >> w >> h >> n;

    // define Good funtion
    auto Good = [&](long long a)->bool{
        // time pata hai ab, ye batao ki t products bana sakte hai?
       long long maxi = (a/w) * (a/h);
       if ( maxi >= n ) return true ;
       return false;

       //return (a/w) * (a/h) >= n;
    };

    // O(log(n))
    long long l = 0, r = 1;
    while (!Good(r))r *= 2;
    while (l + 1 < r) {
        long long m = l + (r - l) / 2;
        if (Good(m))r = m;
        else l = m;
    }

    cout << r << endl;

    return 0;
}