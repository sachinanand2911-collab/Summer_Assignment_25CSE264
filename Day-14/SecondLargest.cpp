#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5];
    int max=INT_MIN;
    int smax=INT_MIN;
    cout<<"Enter The array elements:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i]&&max!=arr[i]){
            smax=arr[i];
        }
    }
    cout<<"The second max element is:"<<smax;
    return 0;
}