#include<iostream>
using namespace std;
int main(){
    char arr[]="Sachin Anand is a Software Engineer";
    int words=1;
    int i=0;
     for(int i=0;arr[i]!='\0';i++){
        if(arr[i]==' '){
            words++;
        }
     }
    cout<<"The Total Word in a Sentence is :"<<words;
}