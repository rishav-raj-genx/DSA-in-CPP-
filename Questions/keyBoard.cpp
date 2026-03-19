#include <iostream>
using namespace std;

void keyBoard(char input){

    int ch=0,n=0,s=1,space=0;

    while(input !='$'){

    if(input>='A' && input<='Z' || input>='a' && input<='z'){
        ch++;
    } else if (input>='0' && input<='9'){
        n++;
    } else if (input==' ' || input=='\t' || input=='\n' ){
        space++;
    } else {
       s++;
    }
    input=cin.get();
    }
    cout<<"Alphabets = "<<ch<<endl;
    cout<<"Digits = "<<n<<endl;
    cout<<"Special Characters = "<<s<<endl;
    cout<<"Spaces = "<<space<<endl;
}

int main(){

    char input;
    input=cin.get();
    keyBoard(input);

    return 0;
}