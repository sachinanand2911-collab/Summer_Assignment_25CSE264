#include<iostream>
using namespace std;
int main(){
    char arr1[]="listen";
    char arr2[]="silent";
       int i1=0;
       int i2=0;
    int length1=0;
    int length2=0;
    while(arr1[i1]!='\0'){
        i1++;
        length1++;
    }
    while(arr2[i2]!='\0'){
        i2++;
        length2++;
    }
    if(length1!=length2){
        cout<<"Not Anagram";
        return 0;
    }
    else{
        for(int i=0;arr1[i]!='\0';i++){
            int count1=0;
            int count2=0;
            for(int j=0;arr1[j]!='\0';j++){
                if(arr1[i]==arr1[j]){
                    count1++;
                }
            }
            for(int k=0;arr2[k]!='\0';k++){
                if(arr1[i]==arr2[k]){
                    count2++;
                }
            }
            if(count1!=count2){
                cout<<"Not Anagram";
                return 0;
            }
        }
    }
    cout<<"Anagram";
}