#include <bits/stdc++.h>
using namespace std;

//O(n*log(n))

int main() {

    int T;
    cin>>T;

    while(T--){

    long long n, x, val;
    cin >> n >> x;

    vector<int> v;

    for(int i = 0; i<n ; i ++){
        cin>>val;
        v.push_back(val);
    }

    sort(v.begin(), v.end());

    int l = 0, r = n - 1;
    // // define Good funtion
    // auto Good = [&](long long a)->bool{
    //     // tumko sq ki side pata hai, batao n rect fit honge ya nahi
    //     long long maxi = (a / w) * (a / h);
    //     if (maxi >= n)return true;
    //     return false;
    //     // return (a / w) * (a / h) >= n;
    // };

    // // O(log(n))
    // long long l = 0, r = 1;
    // while (!Good(r))r *= 2;
    // while (l + 1 < r) {
    //     long long m = l + (r - l) / 2;
    //     if (Good(m))r = m;
    //     else l = m;
    // // }

    // cout << r << endl;
    // }

 cout<< v[ l + (r-l)/2];
}
    return 0;
}