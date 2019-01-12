#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class consumer_signup
{
public:
    char name[20];
    float age;
    string pan;
    int mob,adhar;
    string password;
    getdata()
    {
        cout<<"Enter your name: ";gets(name);
        cout<<"Enter the age: ";cin>>age;
        cout<<"Enter enter the PAN number: ";cin>>pan;
        cout<<"Enter the mobile number: ";cin>>mob;
        cout<<"Enter the aadhar number: ";cin>>adhar;
        cout<<"Create the password: ";cin>>password;
    }

};
class consumer_work : public consumer_signup
{
public:
    float principle,rate,time;
    float cal;                                                  //to be done//
    getdata()
    {
        cout<<"Enter the principal amount: "; cin>>principle;
        cout<<"Enter the time for which amount has to be taken ( in years ): ";cin>>time;
    }
    /*show_repay()
    {
        cout<<"The amount to repay: ";
    }*/

};
void consumer_page( consumer_work &C1)
{
    cout<<"=================================== WELCOME "<<C1.name<<"===================================\n\n";
    //here C1 is costumer object
    C1.getdata();
    float cal;


}
void compare()
{

}
float calculate(consumer_work &C1,servicer S1)
{
    float cal;
    cal =(C1.principle*S1.rate*C1.time)/100;
    return cal;
}

int main()
{
    consumer_work C1;
    consumer_page(C1);
    compare()
}
