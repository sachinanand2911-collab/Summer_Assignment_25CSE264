#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5];
    int max=INT_MIN;
    int min=INT_MAX;
    cout<<"Enter The array elements:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"The max element is:"<<max<<"\n";
    cout<<"The min element is:"<<min;
    return 0;
}