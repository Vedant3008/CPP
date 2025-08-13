#include <iostream>
using namespace std;

int main(){
    int n,r,cube,sum=0,reserved_num;
    cout<<"Enter a number: ";
    cin>>n;
    reserved_num = n;
    while(n>0){
        r=n%10;
        n=n/10;
        cube=r*r*r;
        sum=sum+cube;
    }
    if(sum==reserved_num){
        cout<<"It is a armstrong number";
    }
    else{
        cout<<"It is not a armstrong number";
    }
    return 0;
}