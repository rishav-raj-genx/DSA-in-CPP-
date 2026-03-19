#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> a, int n, vector<int> b, int m){

    int i = 0;

    while(i<n){
        if(b[0]<a[i]){
            int temp = a[i];
            a[i]=b[0];
            b[0]=temp;
            i++;
            sort(b.begin(), b.end());
        } else i++;
    }

    for(i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
       cout<<endl;
     for(i = 0; i<m; i++){
        cout<<b[i]<<" ";
    }
       cout<<endl;
}

int main(){
    vector<int> a = {1,4,8,9};
    vector<int> b = {2,3,6,7};

    merge(a, 4, b, 4);

    return 0;
}