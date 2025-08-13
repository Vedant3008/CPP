#include <iostream>
using namespace std;
int main(){
    int x, y, z;
    x = 5;
    y = 4;
    z = ++x * y++;
    cout<<z<<endl;
    cout << x << endl;
    cout << y << endl;
}