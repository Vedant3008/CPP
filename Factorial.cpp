#include <iostream>
using namespace std;

int main(){
    int n,fact;
    fact=1;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    cout<<"Factorial is: "<<fact;
    return 0;
}