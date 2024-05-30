#include <iostream>
using namespace std;

int main(){
    int height;
    cout<<"Enter your height:"<<endl;
    cin>>height;

    switch (height){
        case 5:
            cout<<"You are short"<<endl;
            break;
        case 6:
            cout<<"You are perfect"<<endl;
            break; 
        default:
            cout<<"You are not applicable"<<endl;
            break;
    }

}
