#include<iostream>
using namespace std;
int main(){
    char arr[]="Sachin Anand";
    for(int i=0;arr[i]!='\0';i++){
        int count=0;
        for(int j=0;arr[j]!=0;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<<"The 1st Non-Repeating Character is :"<<arr[i];
        }
        return 0;
    }
}