#include<iostream>
using namespace std;

int main() {
    int A[] = {2, 4, 11, 8, 10, 15, 13};
    int n = sizeof(A)/sizeof(A[0]); 
    cout<<n<<endl;
    int max=A[0];
    for(int i=0; i<n; i++){
        if(max<A[i]){
            max=A[i];
        }
    }

    cout << max;
}