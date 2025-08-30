#include <iostream>
using namespace std;

int main(){
    int Ar, Ac, Br, Bc;
    cout<<"Enter no. of rows for Matrix A: ";
    cin>>Ar;
    cout<<"Enter no. of columns for Matrix A: ";
    cin>>Ac;
    cout<<"Enter no. of rows for Matrix B: ";
    cin>>Br;
    cout<<"Enter no. of columns for Matrix B: ";
    cin>>Bc;
    if (Ac!=Br){
        cout<<"No. of Column of first matrix should be equal to No. of Rows of the following matrix.";
    }
    else{
    int A[Ar][Ac];
    cout<<"Enter numbers for A matrix:"<<endl;
    for(int i=0; i<Ar; i++){
        for(int j=0; j<Ac; j++){
            cin>>A[i][j];
        }
    }
    int B[Br][Bc];
    cout<<"Enter numbers for B matrix:"<<endl;
    for(int i=0; i<Br; i++){
        for(int j=0; j<Bc; j++){
            cin>>B[i][j];
        }
    }
    int mul[Ar][Bc];
    for(int i=0; i<Ar; i++){
        for(int j=0; j<Bc; j++){
            mul[i][j]=0;
            for(int k=0; k<Ac; k++){
                mul[i][j]+=(A[i][k]*B[k][j]);
            }
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    return 0;
}