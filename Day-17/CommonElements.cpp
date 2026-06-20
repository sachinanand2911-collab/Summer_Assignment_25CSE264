#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int brr[5];;
    cout<<"Enter the elements of first array:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Enter the elements of second array:";
     for(int i=0;i<5;i++){
        cin>>brr[i];
    }
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(arr[i]==brr[j]){
            cout<<arr[i];
        }
    }
   }

}