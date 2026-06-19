#include<iostream>
using namespace std;
int main(){
  int arr[4];
  int sum=0;
  int expectedsum=0;
  int n;
  cout<<"Enter the value of n:";
  cin>>n;
  int missingnumber;
  cout<<"Enter the elements of array:";
  for(int i=0;i<4;i++)
{
    cin>>arr[i];
}
for(int i=1;i<=n;i++){
    expectedsum=expectedsum+i;
}
for(int i=0;i<4;i++){
    sum=sum+arr[i];
}
missingnumber=expectedsum-sum;
cout<<"The missing number is :"<<missingnumber;
    return 0;
}