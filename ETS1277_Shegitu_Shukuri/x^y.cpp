/* Write a program that find the result of the expression x^y where the value of X and Y are entered by the user. */
#include <iostream>
using namespace std;
int main() {
    int x,y;
    long int product = 1;
    cout << "Please enter the value of x: "<<endl;
    cin>> x;
    cout << "Please enter the value of y: "<<endl;
    cin>>y;
    for (int i =1; i<=y; i++) {
        product *= x;
    }
        cout << x <<" raised to the power of " <<y<<" is " << product <<endl;
        return 0;
    
}
