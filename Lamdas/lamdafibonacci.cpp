#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;

    function<int(int)> fib = [&] (int n) -> int {
        
        if (n <= 1) {
            return n;
        }
        return fib(n - 1) + fib(n - 2);
    };

    cout << fib(n) << endl;

    return 0;
}