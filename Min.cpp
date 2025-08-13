#include <iostream>
using namespace std;

int main(){
    int A[]={0,-2,4,5,6,7,2,0,5};
    int min = INT_MAX;
    for(int x:A){
        if(x<min){
            min=x;
        }
    }
    cout<<"Minimum number is: "<<min<<endl;
    return 0;
}