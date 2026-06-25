#include<iostream>
using namespace std;
int main(){
    char arr[]="Sachin Anand is Don";
    int j=0;
    for(int i=0;arr[i]!='\0';i++){
      if(arr[i]!=' '){
        arr[j]=arr[i];
        j++;
      }
    }
     arr[j]='\0';
    cout<<arr;
}