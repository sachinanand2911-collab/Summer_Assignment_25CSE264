#include<iostream>
using namespace std;
int main(){
    int maxcount=0;
    char maxChar;
    char arr[]="Sachin Anand";
    for(int i=0;arr[i]!='\0';i++){
        int count=0;
        if(arr[i]==' '){
            continue;
        }
        for(int j=0;arr[j]!='\0';j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxcount){
        maxcount=count;
        maxChar=arr[i];
    }
  }
  cout<<"The Maximum Occuring Character is : "<<maxChar<<" ";
    }