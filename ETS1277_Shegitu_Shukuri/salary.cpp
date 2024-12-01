/* Design an algorithm and write a to read an employee name weekly working hours, bonus rate per hour and
base salary and find the employees gross-salary, net salary and bonus payment. (Hint: pension rate – 5%,
tax: 15%). */

#include <iostream>
#include <string>
using namespace std;
int main(){
    string employeename;
    double weeklyworkinghours;
    double bonusrateperhour;
    double basesalary;
    cout<<"Please enter the employee name: ";
    cin>> employeename;
    cout<<"Please enter weekly working hours ";
    cin>> weeklyworkinghours;
    cout<<"Please enter bonus rate per hour: ";
    cin>> bonusrateperhour;
    cout<<"Please enter base salary: ";
    cin>>basesalary;
    double grosssalary = basesalary + (weeklyworkinghours * bonusrateperhour);
    double pensiondeduction = 0.05 * grosssalary;
    double taxdeduction = 0.15 * grosssalary;
    double netsalary = grosssalary - (pensiondeduction 
    + taxdeduction);
    double bonuspayment = weeklyworkinghours * bonusrateperhour;
    cout << "Employee name is "<<employeename<<endl;
    cout<<"The gross salary of "<<employeename <<" is "<<grosssalary<<endl;
    cout<<"The net salary of "<<employeename <<" is "<<netsalary<<endl;
    cout<<"The bonus payment of "<<employeename <<" is "<<bonuspayment<<endl;
    return 0;
    
}
