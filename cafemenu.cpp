#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"Welcome To Amex's Cafe"<<endl;
cout<<"Select options "<<endl;
cout<<"1 to see menu\n2 to see contacts\n3 to exit ";
cin>>a;

switch (a)
{
case 1:
    cout<<"We are serving\n1 Hot pizza\n2 Ice tea\n3 Water\n4 Sandwichs ";
    break;
case 2:
cout<<"Contacts "<<endl;
cout<<"Email : professionalamex@gmail.com\n Phone no. : 7057450818.";
break;
case 3:
cout<<" Thankyou for visiting ";
break;
default:
cout<<"enter valid option";
    break;
}
return 0;
}