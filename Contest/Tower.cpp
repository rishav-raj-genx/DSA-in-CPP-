#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long total_sum = 0;
        int current_min = 1e9; 
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        
        current_min = min(current_min, a);
        
        total_sum += current_min;
    }
    
    cout << total_sum << endl;
    }

    return 0;
}