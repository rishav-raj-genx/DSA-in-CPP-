#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 3, b = 5;

    auto add = [&](){
        a=7;
        return a+b;};
    auto sub = [&](){return a-b;};
    auto mul = [&](){return a*b;};
    auto div = [&](){return a/b;};

    cout << a << endl;

    cout << add() << endl;

    cout << a << endl;

    cout << mul() << endl;
    cout << sub() << endl;
    cout << div() << endl;

    return 0;
}