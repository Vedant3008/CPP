#include <iostream>
using namespace std;

int main(){
    int n,r,reverse_num=0,m;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0){
        r=n%10;
        n=n/10;
        reverse_num=reverse_num*10+r;
    }
    m=reverse_num;
    while(m>0){
        r=m%10;
        m=m/10;
        reverse_num=reverse_num*10+r;
        if(r==0){
            cout<<"Zero ";
        }
        else if(r==1){
            cout<<"One ";
        }
        else if(r==2){
            cout<<"Two ";
        }
        else if(r==3){
            cout<<"Three ";
        }
        else if(r==4){
            cout<<"Four ";
        }
        else if(r==5){
            cout<<"Five ";
        }
        else if(r==6){
            cout<<"Six ";
        }
        else if(r==7){
            cout<<"Seven ";
        }
        else if(r==8){
            cout<<"Eight ";
        }
        else if(r==9){
            cout<<"Nine ";
        }
    }
    return 0;
}