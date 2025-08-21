#include <iostream>
using namespace std;

int main(){
    int A[3][3], n=0, C=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Enter the element: ";
            cin>>A[i][j];
            n++;
            C+=A[i][j];
        }
    }
    cout<<"C is: "<<C<<endl;
    cout<<"Average is: "<<(float)C/n;
}