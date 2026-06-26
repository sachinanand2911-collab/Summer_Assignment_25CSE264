#include<iostream>
using namespace std;
int main(){
    char arr[]="Sachin Anand";
    for(int i=0;arr[i]!='\0';i++){
        for(int j=i+1;arr[j]!=0;j++){
            if(arr[i]==arr[j]){
             cout<<"The 1st Repeating Character is :"<<arr[i];
             return 0;
            }
        }
    }
}