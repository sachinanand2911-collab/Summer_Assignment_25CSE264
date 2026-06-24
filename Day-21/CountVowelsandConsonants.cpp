#include<iostream>
using namespace std;
int main(){
    int vowel=0;
    int consonant=0;
    char arr[]="Sachin Anand";
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]=='a' || arr[i]=='e' ||arr[i]=='i'|| arr[i]=='o' || arr[i]=='u'|| arr[i]=='A' || arr[i]=='E' ||arr[i]=='I'|| arr[i]=='O' || arr[i]=='U'){
            vowel++;
        } 
        else if(arr[i]!=' ')
        consonant++;
    }
    cout<<"Total Vowel is :"<<vowel<<endl<<"Total Consonant is :"<<consonant;
}
