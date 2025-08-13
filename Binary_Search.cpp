#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int A[10]={3,4,5,2,1,0,9,6,7,8};
    int n=sizeof(A)/sizeof(A[0]);
    sort(A,A+n);
    int l=0, h=10, key, mid;
    cout<<"Enter Key: ";
    cin>>key;
    while(l<=h){
        mid=(l+h)/2;
        if(key==A[mid]){
            cout<<"Found at: "<<mid;
            break;
        }
        else if(key<A[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    if(l>h){
        cout<<"Key not found";
    }
    return 0;
}