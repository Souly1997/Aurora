/* A serial transmission line can transmit 960 characters a second. Write a program that will calculate how long
it will take to send a file, given the file size. Test your program on a 400MB (419,430,400 byte) file which may
take days. */

#include <iostream>
using namespace std;
int main(){
    
    double size;
    cout<<"Please enter the size of the file you want to transmit in megabytes: "<<endl;
    cin>>size;
    double sizeinbytes = size * 1024 * 1024;
    const double transmissionrate = 960;
    double timeinseconds = sizeinbytes/transmissionrate;
    double timeinhours = timeinseconds / 3600;
    double timeindays = timeinhours / 24;
    cout << "The time is taken to transmit "<<size<<" megabyte is "<<endl;
    cout << "Time in seconds = "<<timeinseconds <<endl;
    cout << "Time in hours = "<<timeinhours <<endl;
    cout << "Time in days = "<<timeindays <<endl;
    return  0;
}

