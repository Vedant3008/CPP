#include <iostream>
using namespace std;

// int main(){
//     int i,n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(i=2; i<n; i++){
//         if(n%i==0){
//             cout<<"It is not a prime number";
//             break;
//         }
//         else{
//             cout<<"It is a prime number";
//             break;
//         }
//     }
//     return 0;
// }

// Above code is correct but does not include 2 as a prime number
int main(){
    int n,i,count=0;
    cout<<"Enter a number: ";
    cin>>n;
    for (i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count == 2){
        cout<<"It is a Prime Number";
    }
    else{
        cout<<"It is not a Prime Number";
    }
}