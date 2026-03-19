#include <iostream>
using namespace std;

void square(int num){
    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){

            if(j < num/2 - i + 2){
                cout<<"-";
            }


        }
        cout<<endl;
    }
}

int main(){
    int num;
    cin >> num;

    square(num);
    return 0;
}
