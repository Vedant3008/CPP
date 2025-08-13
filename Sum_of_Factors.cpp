#include <iostream>
using namespace std;

int main(){
    int n,sum;
    sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    cout<<"Sum is: "<<sum<<endl;
    if(sum==n*2){
        cout<<"It is a Perfect number";
    }
    else{
        cout<<"It is not a perfect number";
    }
    return 0;
}