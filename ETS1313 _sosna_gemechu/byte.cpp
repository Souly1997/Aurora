/*A serial transmission line can transmit 960 characters a second. Write a program that will calculate how long
it will take to send a file, given the file size. Test your program on a 400MB (419,430,400 byte) file which may
take days.*/
#include <iostream>
using namespace std;
int main(){
double size,second,time_in_second ,time_in_hour, time_in_day;
cout<<"enter the size of file you want to transmit in mega byte "<<endl;
cin>>size;
time_in_second=size/0.00096;
time_in_hour=time_in_second/3600;
time_in_day=time_in_hour/24;
cout<<"the time to take transmit "<<size<<"MB is"<<endl;
cout<<"in second"<<time_in_second<<" seconds"<<endl;
cout<<"in hour"<<time_in_hour<<" hours"<<endl;
cout<<"in day"<<time_in_day<<" days"<<endl;

    return 0;
}
