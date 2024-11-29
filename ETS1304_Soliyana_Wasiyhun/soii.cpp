/*take a program that calculates the Body Mass Index (BMI) of a person and determine weather the person is
in normal weight, under weight or over weight. BMI is calculated as (BMI = w/h*h). Make the program to
work for multiple person before terminated.*/
#include <iostream>

using namespace std;

int main()
{
    float weight,height,BMI;
      cout<<"please enter your weight:"<<endl;
      cin>>weight;
     block: cout<<"please enter your height:"<<endl;
      cin>>height;
       BMI= weight/(height*height);

    cout<<"your BMI is: "<<BMI<<endl;
    if(BMI<18.5){
    cout<<"you are under weight"<<endl;
   }else if(BMI>18.5&&BMI<24.9){
    cout<<"you are a normal weight"<<endl;
    }else if(BMI>25&&BMI<29.9){
    cout<<"you are an over weight"<<endl;
    }else{
    cout<<"you are an obese"<<endl;
    }
    int number;
    cout<<" if you want to continue enter 1 and if you do not enter 0"<<endl;
    cin>>number;
    if(number==1){
        goto block;
    }else if(number==0){
    cout<<"we have finished thank you"<<endl;
    }



       }


    return 0;
}#include <iostream>

using namespace std;

int main()
{
    float weight,height,BMI;
      cout<<"please enter your weight:"<<endl;
      cin>>weight;
     block: cout<<"please enter your height:"<<endl;
      cin>>height;
       BMI= weight/(height*height);

    cout<<"your BMI is: "<<BMI<<endl;
    if(BMI<18.5){
    cout<<"you are under weight"<<endl;
   }else if(BMI>18.5&&BMI<24.9){
    cout<<"you are a normal weight"<<endl;
    }else if(BMI>25&&BMI<29.9){
    cout<<"you are an over weight"<<endl;
    }else{
    cout<<"you are an obese"<<endl;
    }
    int number;
    cout<<" if you want to continue enter 1 and if you do not enter 0"<<endl;
    cin>>number;
    if(number==1){
        goto block;
    }else if(number==0){
    cout<<"we have finished thank you"<<endl;
    }



       }


    return 0;
}
