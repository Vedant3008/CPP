#include <iostream>
using namespace std;

typedef int radius;

int main(){
    float area;
    radius r;
    cout<<"Enter radius: ";
    cin>>r;
    area = 3.14*r*r;
    cout<<"Area of a circle is: "<<area<<endl;
    return 0;
}