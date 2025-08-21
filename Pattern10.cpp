#include <iostream>
using namespace std;

int main(){
    char c=65;
    int n;
    cout<<"Enter row number: ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j<=i){
                cout<<c;
                c++;
            }
        }
        cout<<endl;
    }
    return 0;
}