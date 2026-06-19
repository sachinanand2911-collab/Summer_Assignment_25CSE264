#include<iostream>
using namespace std;
int main(){
int arr[5];
int brr[5];
int k=0;
cout<<"Enter the elements of array:";
for(int i=0;i<5;i++){
    cin>>arr[i];
}
for(int i=0;i<5;i++){
    int count=0;
    for(int j=0;j<k;j++){
        if(arr[i]==brr[j]){
          count++;
        }
    }
    if(count==0){
      brr[k]=arr[i];
      k++;
    }
}
cout<<"Array after removing the duplicates:";
for(int i=0;i<k;i++){
    cout<<brr[i]<<" ";
}
    return 0;
}