#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int sum=0;
    float average;
    cout<<"Enter the array elements:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    cout<<"The Sum of Elements of Array is :"<<sum<<"\n";
    average=sum/5;
    cout<<"The Average of elements of array is :"<<average;
    return 0;
}