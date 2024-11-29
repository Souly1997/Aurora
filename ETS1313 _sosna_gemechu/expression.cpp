/*Write a program that find the result of the expression x^y where the value of X and Y are entered by the user.*/
#include <iostream>
using namespace std;
int main(){
int X, Y ,product=1;
cout<<"enter two integer number "<<endl;
cin>>X;
cout<<"and ";
cin>>Y;
for(int i=1;i<=Y;i++){
    product*=X;
    cout<<X<<" the power of "<<Y<<" is"<<product<<endl;
}

return 0;
}
