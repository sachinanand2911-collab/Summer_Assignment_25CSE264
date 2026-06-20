#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int brr[5];
    int crr[10];
    int k=0;
    cout<<"Enter the elements of first array:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Enter the elements of second array:";
     for(int i=0;i<5;i++){
        cin>>brr[i];
    }
   
     for(int i=0;i<5;i++){
        crr[k]=arr[i];
        k++;
     }
        for(int i=0;i<5;i++){
            int count=0;
            for(int j=0;j<k;j++){
            if(brr[i]==crr[j]){
                count++;
            }
        }
        if(count==0){
            crr[k]=brr[i];
            k++;
        }
        }
    cout<<"The union of two array is :";
    for(int i=0;i<k;i++){
        cout<<" "<<crr[i];
    }
}