#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int flag=0;
void SBI()
{
    cout<<"Bank name: State Bank of India\n";
    cout<<"Rate of Interest: 14% per annum\n";
    cout<<"Address: opposite M.J.P.R.U Bareilly\n";

}
void BOB()
{
    cout<<"Bank name: Bank of Baroda\n";
    cout<<"Rate of Interest: 15% per annum\n";
    cout<<"Address: Pawan Vihar Gate bareilly\n";

}
class Servicer;
class consumer;
void compare(consumer,Servicer);

/*class consumer_work : public consumer_signup
{
public:
    float principle,rate,time;
    getdata_2()
    {
        //getdata_1();
        cout<<"Enter the principal amount: "; cin>>principle;
        cout<<"Enter the time for which amount has to be taken ( in years ): ";cin>>time;
    }


};*/


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
        cout<<"Enter your name: ";cin>>name;
        cout<<"Enter the age: ";cin>>age;
        cout<<"Enter enter the PAN number: ";cin>>pan;
        cout<<"Enter the mobile number: ";cin>>mob;
        cout<<"Enter the aadhar number: ";cin>>adhar;
        cout<<"Enter the address: ";cin>>add;
        cout<<"Create the password: ";cin>>password;
    }
void ser_login( Servicer &S1)
{
    void getdata();
    while(1)
    {
    string panid;
    string passd;
    cout<<"Enter the PAN number: ";cin>>panid;
    cout<<"Enter the password: ";cin>>passd;
    if(pan==panid&&password==passd)
       {S1.getdata_2();
       break;}
    else
        cout<<"Wrong PAN or Password \n\n";
    }
}
    int a,flag=1;
    getdata_2()
    {
    cout<<"\n==================================WELCOME==================================\n\n";
    cout<<"Enter the choice: \n\n";
    cout<<"Press 1 for Donation: \n";
    cout<<"Enter 2 for Loan Renting: \n";
    cout<<"Enter 3 for exit\n";
    cin>>a;
    switch(a)
    {
        case 1 : cout<<"Enter the amount: ";cin>>amount;cout<<"Thank you for your donation :)\n";break;
        case 2 : cout<<"Enter the rate of interest: ";cin>>rate;break;
        case 3 : cout<<"Thank you :) \n";break;
        default : cout<<" Invalid input: \n" ;break;

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
        cout<<"Enter your name: ";cin>>name;
        cout<<"Enter the age: ";cin>>age;
        cout<<"Enter enter the PAN number: ";cin>>pan;
        cout<<"Enter the mobile number: ";cin>>mob;
        cout<<"Enter the aadhar number: ";cin>>adhar;
        cout<<"Create the password: ";cin>>password;
        cout<<"Enter the Address: ";cin>>add;
    }
    float principle,rate,time;
    getdata_2()
    {
        cout<<"Enter the principal amount: "; cin>>principle;
        cout<<"Enter the time for which amount has to be taken ( in years ): ";cin>>time;
    }

void cos_login( consumer &C1,Servicer &S1)
{
    while(1)
    {
        string panid;
        string passd;
        cout<<"Enter the PAN number: ";cin>>panid;
        cout<<"Enter the password: ";cin>>passd;
        if(pan==panid&&password==passd)
        {
            C1.active=1;
            void compare(consumer &C1,Servicer &S1);
/*{
    if(C1.active==1)
    {
    cout<<"\n================================= WELCOME =====================================\n\n";
    C1.getdata_2();
    cout<<"\n\n";
    SBI();
    cout<<"Estimated amount to pay: "<<(C1.principle*14*C1.time)/100<<"\n";
    cout<<"------------------------------------\n";
    BOB();
    cout<<"Estimated amount to pay: "<<(C1.principle*15*C1.time)/100<<"\n";
    cout<<"------------------------------------\n";
    if(flag==1)
    {
    cout<<"Individual name: "<<S1.name<<"\n";
    cout<<"Rate of Interest: "<<S1.rate<<"% per annum\n";
    cout<<"Address: "<<S1.add;
    cout<<"Estimated amount to pay: "<<(C1.principle*S1.rate*C1.time)/100<<"\n";
    cout<<"------------------------------------\n";
    }
    }


}*/

            break;
        }
        else
            cout<<"Wrong PAN or Password \n\n";
        }
}


};
void compare(consumer &C1,Servicer &S1)
{

    cout<<"\n================================= WELCOME =====================================\n\n";
    C1.getdata_2();
    cout<<"\n\n";
    SBI();
    cout<<"Estimated amount to pay: "<<(C1.principle*14*C1.time)/100<<"\n";
    cout<<"------------------------------------\n";
    BOB();
    cout<<"Estimated amount to pay: "<<(C1.principle*15*C1.time)/100<<"\n";
    cout<<"------------------------------------\n";
    if(flag==1)
    {
    cout<<"Individual name: "<<S1.name<<"\n";
    cout<<"Rate of Interest: "<<S1.rate<<"% per annum\n";
    cout<<"Address: "<<S1.add;
    cout<<"Estimated amount to pay: "<<(C1.principle*S1.rate*C1.time)/100<<"\n";
    cout<<"------------------------------------\n";
    }



}
void ser_inter( Servicer &S1 )
{
    int b,flg=1;
    cout<<"Enter Your Choice: \n";
    cout<<"Press 1 for sign up: \n";
    cout<<"Press 2 for login: \n";
    cout<<"Press 3 for exit: \n";
    cin>>b;
    while(flg==1)
    {
        switch(b)
        {
            case 1 : S1.getdata_1();flg=0;break;
            case 2 : S1.ser_login(S1);flg=0;break;
            case 3 : cout<<"Thank you :) \n";flg=0;break;
            default : cout<<"Invalid choice ";break;
        }
    }
}
void cos_inter( consumer &C1,Servicer &S1)
{
    int b,flg=1;
    cout<<"Enter Your Choice: \n";
    cout<<"Press 1 for sign up: \n";
    cout<<"Press 2 for login: \n";
    cout<<"Press 3 for exit: \n";
    cin>>b;
    while(flg==1)
    {
        switch(b)
        {
            case 1 : C1.getdata_1();flg=0; break;
            case 2 : C1.cos_login(C1,S1);flg=0;break;
            case 3 : cout<<"Thank you :) ";flg=0;break;
            default : cout<<"Invalid choice ";break;
        }
    }
}
void interface( consumer &C1, Servicer &S1)                                                     //Interface//
{

    int a,flg=1;
    cout<<"Enter your choice: \n";
    cout<<"Press 1 for Donating/Providing loan: \n";
    cout<<"Press 2 for Loan Searching: \n";
    cout<<"Press 3 for Exit: \n";
    cin>>a;
    while(flg==1)
    {
        switch(a)
        {
            case 1 : ser_inter( S1 ); break;
            case 2 : cos_inter( C1,S1);break;
            case 3 : cout<<"Thank you :) ";flg=0;break;
            default: cout<<"Invalid choice ";break;
        }
    }
}
int main()
{
    consumer C1;
    Servicer S1;
    interface(C1,S1);


}
