#include <iostream>
using namespace std;

int digitSum(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int primeSum(int n) {
    int sum = 0;
    for(int i = 2; i * i <= n; ++i) {
        while(n % i == 0) {
            sum += digitSum(i);
            n /= i;
        }
    }
    if(n > 1) sum += digitSum(n); 
    return sum;
}

int main() {
    int n;
    cin >> n;
    if(digitSum(n) == primeSum(n))
        cout << 1; 
    else
        cout << 0; 
    return 0;
}
