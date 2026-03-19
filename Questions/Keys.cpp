#include <iostream>
using namespace std;

void keys(char ch){

    if (ch>='A' && ch<='Z'){

        cout<<"You have pressed Capital Letter"<<endl;

    } else if ( ch>='a' && ch<='z'){

        cout<<"You have pressed Small Letter"<<endl;

    } else if ( ch>='0' && ch<='9'){

        cout<<"You have pressed a no. between 0-9"<<endl;

    } else {

        cout<<"You have clicked any special character"<<endl;
        
    }
}

int main(){

    char ch;
    cin>>ch;

    keys(ch);

    return 0;

}
