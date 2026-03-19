// #include <iostream>
// using namespace std;

// void rainWater(int ar[], int n)
// {
// 	int water = 0;
// 	int l=0, r=n-1;
// 	int lmax = 0;
//     int rmax = 0;

// 	while(l<r){
// 		lmax= max(lmax,ar[l]);
//         rmax= max(rmax,ar[r]);

// 		if(lmax<rmax){
// 			water += lmax-ar[l];
// 			l++;
// 		} else {
// 			water += rmax-ar[r];
// 			r--;
// 		}
// 	}
//     cout << water << endl;
// }


#include <iostream>
#include <vector>
using namespace std;

void WaterContainer(vector<int>v, int n){
    
    int water=0;
	int l=0;
	int r = v.size()-1;
	int lmax=0;
	int rmax=0;
    int h = 0;

	while(l<r){

		lmax = max(lmax,v[l]);
		rmax = max(rmax,v[r]);
        h = min(rmax, lmax);

		if(lmax > rmax){

			water += h - v[r];
			r--;

		} else if(lmax == rmax){

			water += h - v[l];
			l++;

		} else {

			water += h - v[l];
			l++;

		}
	}
cout<<water<<endl;
}

int main(){
    int n, val;
    cin>>n;

    vector<int>v;

    for(int i=0; i<n; i++){
        cin>>val;
        v.push_back(val);
    }

    WaterContainer(v, n);

    return 0;
}


//8
// 1 7 3 0 9 2 4 8