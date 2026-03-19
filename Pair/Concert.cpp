// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n, m;

//     cin >> n >> m;

//     multiset<long long> mp;
//     for(int i = 0; i<n; i++){
//         long long l;
//         cin>>l;
//         mp.insert(l);
//     }
//     for(int i = 0; i<m; i++){
//         long long z;
//         cin>>z;
//         auto it = mp.upper_bound(z);
//         if(it==mp.begin()){
//             cout<<-1<<endl;
//         } else {
//             --it;
//             cout<<*it<<endl;
//             mp.erase(it);
//         }
//     }
//     return 0;
// }







#include <bits/stdc++.h>
using namespace std;

void concert(const set<long long>& va, const set<long long>& vb) {

    bool flag = false;

    for (auto x : vb) 
    {
        if (va.find(x) != va.end()) { 
            cout << x << '\n';
            flag = true;
        }
    }
    if (!flag) 
    {
        cout << -1;
    }
}

int main() {

    long long n, m;
    cin >> n >> m;

    set<long long> va, vb;

    for (int i = 0; i < n; ++i) 
    {
        long long x;
        cin >> x;
        va.insert(x);
    }

    for (int i = 0; i < m; ++i) 
    {
        long long x;
        cin >> x;
        vb.insert(x);
    }

    concert(va, vb);

    return 0;
}
