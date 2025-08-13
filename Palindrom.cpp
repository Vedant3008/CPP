#include <iostream>
using namespace std;

int main(){
    int n,reserved_num,remainder,reverse_num=0;
    cout<<"Enter a number: ";
    cin>>n;
    reserved_num=n;
    reverse_num=0;
    while(n>0){
        remainder=n%10;
        n=n/10;
        reverse_num=reverse_num*10+remainder;
    }
    if(reverse_num==reserved_num){
        cout<<"It is a palindrom";
    }
    else{
        cout<<"It is not a palindrom";
    }
    return 0;
}