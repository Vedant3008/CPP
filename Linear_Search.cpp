#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int A[6]={20,30,54,67,89,90};
    for(int i=0; i<6; i++){
        if(n==A[i]){
            cout<<"Number found at index: "<<i<<endl;
            break;
        }
        else{
            cout<<"Number is not in the array.";
            break;
        }
    };
    return 0;
}