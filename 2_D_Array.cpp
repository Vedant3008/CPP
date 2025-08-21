#include <iostream>
using namespace std;

int main(){
    int A[3][4]={{2,3,4,5},{10,20,30,40},{35,56,67,78}};
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<A[i][j];
        }
        cout<<endl;
    }
    return 0;
}