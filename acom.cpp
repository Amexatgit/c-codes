#include <iostream>
#include <stdio.h>
 using namespace std;

 int main (){

 int arr[10] = {0,1,5};
 cout << " address of  "<< arr <<endl;
 cout << " address "<< &arr[0]<<endl;
cout << " address "<< &arr[2]<<endl;
cout << " address "<< &arr[1]<<endl;
cout << " address "<< arr[2]<<endl;
cout << " address "<< arr[8]<<endl;
   
return 0;
 }