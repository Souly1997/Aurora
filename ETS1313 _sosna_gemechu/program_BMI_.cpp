/*Make a program that calculates the Body Mass Index (BMI) of a person and determine weather the person is
in normal weight, under weight or over weight. BMI is calculated as (BMI = w/h*h). Make the program to
work for multiple person before terminated.*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
float height, weight, BMI;// first we accept height, weight, 
block: 
cout<<"please enter your weight "<<endl;// first we accept height, weight,  from the useer
cin>>weight;
cout<<"please enter your height "<<endl;
cin>>height;
BMI=weight/(height*height);//then we calculate body mass index by using the formula
if(BMI<18.5){//then we write the condition
    cout<<"oops! you are under weight. your body mass index is  "<<BMI<<endl;
} else if(BMI>18.5&&BMI<24.9){
    cout<<"great you are at normal weight. your body mass index is  "<<BMI<<endl;
} else if(BMI>24.9&&BMI<29.9){
    cout<<"great you are at over weight. your body mass index is  "<<BMI<<endl;
} else {
    cout<<"oops! you are obese you need to work exrcise every day. your body mass index is  "<<BMI;
}
int number;//we code the program for multiple person so we ask the user to continue or stop
cout<<"if you want to continue enter /' 1/' and if you don/'t enter /'0/'"<<endl;
cin>>number;

    
if(number==1){
goto block;
} else if(number==0){
cout<<"we finish thank you"<<endl;
}
    return 0;
}
