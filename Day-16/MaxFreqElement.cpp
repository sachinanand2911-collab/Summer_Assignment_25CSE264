#include<iostream>
using namespace std;
int main(){
    int arr[5];
    
 cout<<"Enter the elements of array:";
  for(int i=0;i<5;i++)
{
    cin>>arr[i];
}
int maxfrequency=0;
int element =arr[0];
for(int i=0;i<5;i++){
    int count =0;
    for(int j=0;j<5;j++){
        if(arr[i]==arr[j])
        count++;
    }
    if(count >maxfrequency){
    maxfrequency=count;
    element=arr[i];
}
}
cout<<"The maximum frequency element is :"<<element;
  return 0;
}