#include<bits/stdc++.h>
using namespace std;

long long factorial(long long n){
    if(n == 0) return 1;
    return n * factorial(n-1);
}
long long combination(int i, int j){
    return factorial(i)/(factorial(j)*factorial(i-j));
}
int main(){
    int n;cin>>n;
    vector<vector<long long>>v(n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j<= i; j++){
            v[i].push_back(combination(i, j));
        }
    }
    for(auto &a: v) {
        for(auto &b: a) {
        cout<<b<<" ";
    }
cout<<endl;
}
}