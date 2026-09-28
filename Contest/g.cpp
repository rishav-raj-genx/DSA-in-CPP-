


#include <bits/stdc++.h>
using namespace std;

int main(){

  int t; 
  cin>>t;

  while(t--){


    long long a, b, c;
    cin>>a>>b>>c;

    long long maxy = INT_MIN;

    maxy = max(abs((c+ a) - b), abs(b-a));

    cout << maxy << endl;
  }

  return 0;
}

