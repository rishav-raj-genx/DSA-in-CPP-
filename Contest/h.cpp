
#include <bits/stdc++.h>
using namespace std;

int main(){

  int t; 
  cin>>t;

  while(t--){

    long long n;
    cin >> n;

    string s;
    cin >> s;
    
    if (s[0] == '1') {
        long long z = 0;
        for (char c : s) {
            if (c == '0') z++;
        }
        cout << z << endl;
        continue; 
    }
    
    long long f1 = -1;
    for (long long i = 0; i < n; i++) {
        if (s[i] == '1') {
            f1 = i;
            break; 
        }
    }
    
    if (f1 == -1) {
        cout << 0 << endl;
        continue; 
    }
    
    long long ol = 0;
    long long z = 0;
    
    for (long long i = f1; i < n; i++) {
        if (s[i] == '0') {
            z++;
        }
    }
    
    long long op = n;
    
    for (long long k = f1; k <= n; k++) {

        long long curr = ol + z;
        
        op = min(op, curr);
        
        if (k < n) {
            if (s[k] == '1') {
                ol++;
            } else {
                z--;
            }
          }
    }
    
    cout << op << endl;

  }

  return 0;
}