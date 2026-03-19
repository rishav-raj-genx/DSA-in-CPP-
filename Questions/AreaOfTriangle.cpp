#include <bits/stdc++.h>
using namespace std;

void Area(int b, int h){
    int area;

    area = ( b * h )/2;

    cout<< area <<endl;
}

void Area (int b, int h, int c){

    int area;
    int s=(b+h+c)/2;

    area = sqrt(s*(s-b)*(s-h)*(s-c));

    cout<<area<<endl;
}

int main(){

    int b,h,c;
    cin>>b>>h>>c;

    Area(b,h);
    Area(b,h,c);

    return 0;
}