#include <bits/stdc++.h>
using namespace std;

void quick(vector<int>& v, int l, int r){

    int partition()


}

int main(){

    vector<int> v = {60, 50, 20, 10, 40, 30};

    int n = v.size();

    int i = -1;
    int l = 0;
    int p = n-1;

    while(l<p){
        if(v[l] < v[p]){
            swap(v[l], v[i]);
            i++;
            l++;
        } else l++;
    }

    swap(v[p], v[i]);

    quick(v, 0, n-1);

    return 0;
}