#include<iostream>
using namespace std;
int main(){
    char arr[]="Ram Lal";
    int i=0;
    int length=0;
    while(arr[i]!='\0'){
        i++;
        length++;
    }
    for(int i=0,j=length-1;i<j;i++,j--){
        char temp =arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    cout<<"The reverse of String is :"<<arr;

}