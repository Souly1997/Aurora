/*1, Make a program that calculates the Body Mass Index (BMI) of a person and determine weather the person is
in normal weight, under weight or over weight. BMI is calculated as (BMI = w/h*h). Make the program to
work for multiple person before terminated.*/


#include<iostream>
using namespace std;
int main(){
    float height,weight,BMI;
    int choice;
    
    do
    {
        cout<<"Can you please enter your weight (in Kg): "<<endl;
        cin>>weight;
        cout<<"Can you please enter your height (in meter): "<<endl;
        cin>>height;
        BMI=weight/(height*height);
        cout<<"BMI= "<<BMI<<endl;
        if(BMI<18.5)
        {
            cout<<"Oh, you are under weight"<<endl;     
        }else if(BMI<18.5 && BMI<24.9)
        {
            cout<<"Congra, you have normal weight"<<endl;
        }else if (BMI<25 && BMI<29.9)
          
        {cout<<"Oh, you are over weight"<<endl;
        }else{
        cout<<"Sorry, you are obese"<<endl;
    }
    cout<<"If you want to continue, please press 1 if not please press 0"<<endl;
    cin>>choice;
    }
    while(choice==1);
    cout<<"Great, we did it";
     
    return 0;
