/*Design an algorithm and write a to read an employee name weekly working hours, bonus rate per hour and
base salary and find the employees gross-salary, net salary and bonus payment. (Hint: pension rate – 5%,
tax: 15%).*/
#include <iostream>
using namespace std;
int main(){
string name;
float weekly_working_hours, bonus_rate,base_salary;
float pension, tax, gross_salary,net_salary, bonus;
cout<<"enter your name"<<endl;//first we accept the user's name
cin>>name;
cout<<"enter your base salary"<<endl;//and also we accept the base salary of user's
cin>>base_salary;
cout<<"enter the bonus rate of your campany"<<endl;
  //the bonus rate is differ from campany to campany so we accept bonus rate of campany
cin>>bonus_rate;
bonus=bonus_rate*weekly_working_hours;
gross_salary=bonus+base_salary; //gross salary is total salary of user with out tax and pension but additional to the bonus
tax=0.15*gross_salary; //we calculate tax from the gross salary
pension=0.5*base_salary;//and also we calculate pension from the base salary
net_salary=base_salary-tax-pension; //then to get net salary of the employe with out tax and pension we subtract the tax and pension from the base salary
cout<<"Dear "<<name<<"your clearly net salary is "<<net_salary<<endl;
cout<<"and also your bonus and gross salary is"<<bonus<<" and "<<gross_salary<<"respectively thank you!"<<endl;
return 0;
}
