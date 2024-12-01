Write a program that find the result of the expression 𝑥^𝑦 where the value of X and Y are entered by the user.

#include<iostream>
using namespace std;
int main (){
    int x,y,product=1;
    cout<<"enter x : "<<endl;
    cin>>x;
    cout<<"enter y : "<<endl;
    cin>>y;
    for(int i=1;i<=y;i++){
         product*=x;
    }
    cout<<x<<" "<<"the power of"<<y<<" "<<" =  "<<product<<endl;


    return  0;
}
