#include<iostream>
using namespace std;

int main(){
    
    int a,b;

    cout<<"enter the number of which you need table"<<endl;
    cin>>a;
    cout<<"enter the no of multiples"<<endl;
    cin>>b;

    for (int i=1;i<=b;i++){
    cout<<a<<"*"<<i<<"="<<i*a<<endl;
    
    } 
    
    return 0;

}
