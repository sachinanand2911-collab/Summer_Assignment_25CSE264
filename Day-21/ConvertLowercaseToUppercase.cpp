#include<iostream>
using namespace std;
int main(){
    char arr[]="sachin anand";
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]>='a' && arr[i]<='z'){
           arr[i]=arr[i] -32;
        }
    }
    cout<<"The UpperCase is :"<<arr;
}