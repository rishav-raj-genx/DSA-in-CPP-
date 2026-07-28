#include<bits/stdc++.h>
using namespace std;

int main(){
    auto add = [](int a, int b){return a+b;};
    auto sub = [](int a, int b){return a-b;};
    auto mul = [](int a, int b){return a*b;};
    auto div = [](int a, int b){return a/b;};

    int a,b;
    cin>>a>>b;

    cout << add(a,b) << endl;
    cout << sub(a,b) << endl;
    cout << mul(a,b) << endl;
    cout << div(a,b) << endl;

    return 0;
}