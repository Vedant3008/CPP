#include <iostream>
using namespace std;

int main(){
    int digit, remainder;
    cout<<"Enter a number: ";
    cin>>digit;
    while(digit>0){
        remainder = digit%10;
        digit=digit/10;
        cout<<remainder;
    }
    return 0;
}