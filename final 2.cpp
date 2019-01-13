#include<iostream>
#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<cstdlib>
using namespace std;
int flag=0,garbage;
void SBI()
{
    cout<<"\nBank name: State Bank of India\n";
    cout<<"\nRate of Interest: 14% per annum\n";
    cout<<"\nAddress: opposite M.J.P.R.U Bareilly\n";

}
void BOB()
{
    cout<<"\nBank name: Bank of Baroda\n";
    cout<<"\nRate of Interest: 15% per annum\n";
    cout<<"\nAddress: Pawan Vihar Gate bareilly\n";

}
class Servicer;
class consumer;
void compare(consumer,Servicer);
class Servicer                                                            //servicer sign up//
{
public:
    int active=0;
    string name;
    float age;
    string pan;
    long double mob,adhar;
    string password;
    float amount,rate;
    string add;                                            //for service provider//
    getdata_1()
    {
        system("cls");
        cout<<"\nEnter your name: ";cin>>name;
        cout<<"\nEnter the age: ";cin>>age;
        cout<<"\nEnter enter the PAN number: ";cin>>pan;
        cout<<"\nEnter the mobile number: ";cin>>mob;
        cout<<"\nEnter the aadhar number: ";cin>>adhar;
        cout<<"\nEnter the address: ";cin>>add;
        cout<<"\nCreate the password: ";cin>>password;
        cout<<"\n----------------Congratulation! You have signed up successfully ----------------\n";
        cout<<"\npress any key and then enter to exit: ";cin>>garbage;
    }
void ser_login( Servicer &S1)
{
    void getdata();
    while(1)
    {
        system("cls");
    string panid;
    string passd;
    cout<<"\nEnter the PAN number: ";cin>>panid;
    cout<<"\nEnter the password: ";cin>>passd;
    if(pan==panid&&password==passd)
       {S1.getdata_2();
       break;}
    else
        {
            cout<<" \nWrong PAN or Password \n\n";
            char x;
            cout<<"If you want to try again then press 'y' else press any key  ";
            cin>>x;
            if(x!='y')
            break;

        }
    }
}
    int a,flag=1;
getdata_2()
{
    system("cls");
    cout<<"\n==================================WELCOME==================================\n\n";
    cout<<"\nPress 1 for Donation: \n";
    cout<<"\nEnter 2 for Loan Renting: \n";
    cout<<"\nEnter 3 for exit\n";
    cout<<"\nEnter the choice:  ";
    cin>>a;
    if(a==2)
        flag=1;
    switch(a)
    {
        case 1 : {cout<<"\nEnter the amount: ";cin>>amount;cout<<"\n****** Thank you for your donation :) ******\n";}break;
        case 2 : cout<<"\nEnter the rate of interest: ";cin>>rate;flag=1;cout<<"\npress any key and then enter to exit ";break;
        case 3 : cout<<"\n****** Thank you :) ******\n";break;
        default : cout<<"\nInvalid input: \n " ;break;
    }
}
friend void compare(consumer,Servicer);

};
class consumer
{
friend void compare(consumer,Servicer);
public:
    int active=0;
    string name;
    float age;
    string pan;
    string mob,adhar;
    string password;
    string add;
    getdata_1()
    {
        system("cls");
        cout<<"\nEnter your name: ";cin>>name;
        cout<<"\nEnter the age: ";cin>>age;
        cout<<"\nEnter enter the PAN number: ";cin>>pan;
        cout<<"\nEnter the mobile number: ";cin>>mob;
        cout<<"\nEnter the aadhar number: ";cin>>adhar;
        cout<<"\nCreate the password: ";cin>>password;
        cout<<"\nEnter the Address: ";cin>>add;
        cout<<"\n----------------Congratulation! You have signed up successfully ----------------\n";
        cout<<"\npress any key to exit: ";cin>>garbage;
    }
    float principle,rate,time;
    getdata_2()
    {
        cout<<"\nEnter the principal amount: "; cin>>principle;
        cout<<"\nEnter the time for which amount has to be taken ( in years ): ";cin>>time;
    }
void cos_login( consumer &C1,Servicer &S1)
{
    while(1)
    {
        system("cls");
        string panid;
        string passd;
        cout<<"\nEnter the PAN number: ";
        cin>>panid;
        cout<<"\nEnter the password: ";
        cin>>passd;
        if(pan==panid&&password==passd)
        {
            system("cls");
        cout<<"\n================================= WELCOME =====================================\n\n";
        C1.getdata_2();
        cout<<"\n\n";
        SBI();
        cout<<"Estimated amount of interest : "<<(C1.principle*14*C1.time)/100<<"\n";
        cout<<"------------------------------------\n";
        BOB();
        cout<<"Estimated amount of interest : "<<(C1.principle*15*C1.time)/100<<"\n";
        cout<<"------------------------------------\n";

            cout<<"\nIndividual name: "<<S1.name<<"\n";
            cout<<"\nRate of Interest: "<<S1.rate<<"% per annum\n";
            cout<<"\nAddress: "<<S1.add;
            cout<<"\nEstimated amount to pay: "<<(C1.principle*S1.rate*C1.time)/100<<"\n";
            cout<<"------------------------------------\n";
         cout<<"\npress any key and then enter to exit: ";cin>>garbage;
            break;
        }
            cout<<" \nWrong PAN or Password try again \n\n";
        }
}
};
void ser_inter( Servicer &S1 )
{
    int b,flg=1;
    while(flg==1)
    {
        system("cls");
        cout<<"\nPress 1 for sign up: \n";
        cout<<"\nPress 2 for login: \n";
        cout<<"\nPress 3 for exit: \n";
        cout<<"\nEnter Your Choice:  ";
        cin>>b;
        switch(b)
        {
            case 1 : S1.getdata_1();flg=0;break;
            case 2 : S1.ser_login(S1);flg=0;break;
            case 3 : cout<<"****** Thank you :) ******\n";flg=0;break;
            default : cout<<"Invalid choice ";break;
        }
    }
}
void cos_inter( consumer &C1,Servicer &S1)
{
    int b,flg=1;
    while(flg==1)
    {
        system("cls");
        cout<<"\nPress 1 for sign up: \n";
        cout<<"\nPress 2 for login: \n";
        cout<<"\nPress 3 for exit: \n";
        cout<<"\nEnter Your Choice:  ";
        cin>>b;
        switch(b)
        {
            case 1 : C1.getdata_1();flg=0; break;
            case 2 : C1.cos_login(C1,S1);flg=0;break;
            case 3 : cout<<"****** Thank you :) ******";flg=0;break;
            default : cout<<"Invalid choice ";break;
        }
    }
}
void interface( consumer &C1, Servicer &S1)                                                     //Interface//
{

    int a,flg=1;
    while(1)
    {
        system("cls");
        cout<<"\nPress 1 for Donating/Providing loan: \n";
        cout<<"\nPress 2 for Loan Searching: \n";
        cout<<"\nPress 3 for Exit: \n";
        cout<<"\nEnter your choice:  ";
        cin>>a;
        switch(a)
        {
            case 1 :
                ser_inter( S1 );
                 break;
            case 2 : cos_inter( C1,S1);break;
            case 3 : cout<<"****** Thank you :) ******";flg=0;break;
            default: cout<<"Invalid choice ";break;
        }
        cout<<"\n\n\t================================================================\n\n";
    }
}
int main()
{
    system("color f6");
    consumer C1;
    Servicer S1;
    S1.name="Nitin";
    S1.rate=5;
    interface(C1,S1);
}
