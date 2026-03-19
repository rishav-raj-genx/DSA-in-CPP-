#include<bits/stdc++.h>
using namespace std;

int altera(int n, int i, bool t, int sum){

    if(i > n) return sum;
    if(t){
        sum += i;
    } else sum -= i;

    t = !t;

    return altera(n, i+1, t, sum);
}

int main(){
    int n = 10;

    cout<<altera(n, 1, true, 0)<<" ";
    cout<<endl;

    return 0;
}