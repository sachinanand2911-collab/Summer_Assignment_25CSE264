#include<iostream>
using namespace std;
int main(){
    char arr[]="Sachin Anand";
    int i=0;
    int length=0;
    while(arr[i]!='\0'){
        i++;
        length++;
    }
    cout<<"The length of String is :"<<length;

}