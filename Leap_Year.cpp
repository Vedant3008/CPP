#include <iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter Year: ";
    cin>>year;
    if(year%4==0){   //OR if((year%4==0 && year%100!=0) || year%400==0)-->It is a Leap Year.
        if(year%100==0){
            if(year%400==0){
                cout<<"It is a Leap Year";
            }
            else{
                cout<<"It is Not a Leap Year";
            }
        }
        else{
            cout<<"It is a Leap Year";
        }
    }
    return 0;
}