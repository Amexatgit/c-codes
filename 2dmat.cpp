#include<bits/stdc++.h>
using namespace std;

bool searchNum(int arr [][3], int target ,int m, int n){
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(arr[i][j]==target){
            return true;
        }
    }
   
   }
    return false;

}
int main(){
    int arr[3][3];
   int m=3;
   int n=3;
   

   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
        cin>>arr[i][j];
       }
   }
   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
        cout<<arr[i][j];
       }
       cout<<endl;
   }
   int x;
   cout<<"enter the number you want to find"<<endl;
    cin>>x;

    if(searchNum(arr,x ,3, 3)){
        cout<<"element is present"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    

    

    return 0;
}