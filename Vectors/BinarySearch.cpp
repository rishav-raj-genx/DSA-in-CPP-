#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void BinarySearch(vector<int>v, int n, int target){

  int l=0, r=n-1;

  while(l<=r){
    int mid = l + (r-l)/2;

    if(v[mid]==target){
      cout<<mid;
      break;
    } else if (v[mid]< target){
      l = mid + 1;
    } else if (v[mid]>target){
      r = mid - 1;
    }
  }
}

int main(){
  int n,val;
  cin>>n;

  vector<int>v;

  for(int i=0; i<n; i++){
    cin>>val;
    v.push_back(val);
  }

  int target;
  cin>>target;

  sort(v.begin(), v.end());

  BinarySearch(v, n, target);

  return 0;
}
