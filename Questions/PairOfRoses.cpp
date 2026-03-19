// #include <bits/stdc++.h>
// using namespace std;

// void pairOfRoses(int no, vector<int>v, int m){

    
//     for(int i=0; i<no; i++){

//         int j = i+1;
        
//             if(v[i]+v[j] == m && min(v[j]-v[i], v[j]-v[i])){

//                 cout<<"Deepak should buy roses whose prices are "<<v[i]<<" and "<<v[j]<<"."<<endl;

//         }
//     }
// }

// int main(){

//     int n, val;

//     cin>>n;

//     int no, m;
//     vector<int>v;

//     for(int i=0; i<n; i++){

//         cin>>no;

//         for(int i=0; i<no; i++){
//         cin>>val;
//         v.push_back(val);
//         }

//         cin>>m;
//         cout<<endl;

//     pairOfRoses(no, v, m);

// }

// }

#include <bits/stdc++.h>
using namespace std;

void pairOfRoses(vector<int>& v, int m) {
    sort(v.begin(), v.end());
    int left = 0, right = v.size() - 1;
    int bigL = 0, smallR = 0;
    int min_diff = INT_MAX;

    while (left < right) {
        int sum = v[left] + v[right];
        if (sum == m) {
            if (v[right] - v[left] < min_diff) {
                bigL = v[left];
                smallR = v[right];
                min_diff = v[right] - v[left];
            }
            left++;
            right--;
        }
        else if (sum < m) {
            left++;
        }
        else { 
            right--;
        }
    }
    cout <<endl<< "Deepak should buy roses whose prices are " << bigL << " and " << smallR << "." << endl;
}

int main() {
    int T, N, price, M;
    cin >> T;
    while (T--) {
        cin >> N;
        vector<int> v;
        for (int i = 0; i < N; i++) {
            cin >> price;
            v.push_back(price);
        }
        cin >> M;
        pairOfRoses(v, M);
        cout << endl;
    }
    return 0;
}
