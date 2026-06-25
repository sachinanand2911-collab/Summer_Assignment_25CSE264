#include<iostream>
using namespace std;
int main(){
    char arr[]="missisipi";
    int i=0;
    int length=0;
    while(arr[i]!='\0'){
        i++;
        length++;
    }
    i=0;
    int j=length -1;
    while(i<j){
        if(arr[i]!=arr[j]){
         cout<<"Not palindrome";
         return 0;
        }
        i++;
        j--;
    }
    cout<<"Palindrome"<<endl;
}