/* Write a program that prompts the capacity in gallons of an automobile fuel tank and the miles per gallons
the automobiles can be driven. The program outputs the number miles the automobile can be driven
without refueling. */

#include <iostream>
using namespace std;
int main() {

float mile, mile_per_gallon, fuel_of_car;
cout <<"Please enter how many miles your car can drive per gallon: " << endl;
cin >> mile_per_gallon;
cout<<"Please enter the amount of fuel currently you have in your gallond: "<< endl;
cin >> fuel_of_car;
mile = fuel_of_car* mile_per_gallon;
cout <<" The number of miles your automobile canbe driven without refueling is "<<mile<< endl;
return 0;
}
