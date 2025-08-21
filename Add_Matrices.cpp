#include <iostream>
using namespace std;

int main(){
    int A[3][4]={{20,30,40,50},{10,20,30,40},{35,5,6,7}};
    int B[3][4]={{20,30,40,49},{10,20,30,40},{35,5,6,7}};
    int C[3][4];
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            C[i][j]=A[i][j]+B[i][j];
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}