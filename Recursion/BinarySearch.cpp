// #include<bits/stdc++.h>
// using namespace std;

// int binary(int ar[], int target, int l, int r){

//     int mid = l + (r - l) / 2;

//     if(l <= r){

//     if(ar[mid] == target) return mid;

//     else if (ar[mid] < target) return binary(ar, target, l = mid + 1, r);

//     else if (ar[mid] > target) return binary(ar, target, l, r = mid - 1);

//     }
    
//     return -1;
// }

// int main(){
//     int n;
//     cin>>n;

//     int ar[n];

//     for(int i = 0; i<n; i++){
//         cin>>ar[i];
//     }

//     int target;
//     cin>>target;

//     int l = 0;
//     int r = n-1;

//     cout<<binary(ar, target, l, r)<<endl;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int binary(vector<int>& v, int l, int r, int t){

    if(l>r) return -1;

    int mid = l + (r-l)/2;
    
    if(v[mid]==t) return mid;
    else if (v[mid]<t) l = mid + 1;
    else r = mid - 1;

    return binary(v, l, r, t);
}

int main(){
    int n;
    cin>>n;

    vector<int>v(n);
    for(auto &a: v) cin>>a;

    int t;
    cin>>t;

    cout<<binary(v, 0, n-1, t)<<endl;

    return 0;
}