#include <iostream>
using namespace std;

typedef float basic_salary;
int main(){
    basic_salary s;
    float percentageAllowance;
    float percentageDeduction;
    float net_salary;
    cout<<"Write Basic Salary: ";
    cin>>s;
    cout<<"Enter Percentage of Allowance: ";
    cin>>percentageAllowance;
    cout<<"Enter Percentage of Deduction: ";
    cin>>percentageDeduction;
    net_salary = s + (s*percentageAllowance/100) - (s*percentageDeduction/100);
    cout<<"Your net salary is: "<<net_salary;
    return 0;
}