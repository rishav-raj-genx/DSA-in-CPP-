#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;
    int t = 2;
    vector<int> v = {1, 2, 2,2,2, 3, 4,5,6,10};

    cout<< *lower_bound(v.begin(), v.end(), t) << endl;
    cout<< *upper_bound(v.begin(), v.end(), t) << endl;
    cout<< lower_bound(v.begin(), v.end(), t) - v.begin() << endl;
    cout<< v.end() - upper_bound(v.begin(), v.end(), t) << endl;
    cout<< v.end() - lower_bound(v.begin(), v.end(), t) << endl;
    cout<< upper_bound(v.begin(), v.end(), t) - v.begin() << endl;
    cout<< upper_bound(v.begin(), v.end(), t) - lower_bound(v.begin(), v.end(), t) << endl;

    return 0;
}