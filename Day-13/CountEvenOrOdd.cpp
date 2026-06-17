#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int evencount=0;
    int oddcount=0;
     cout<<"Enter the array elements:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }

    cout << "Total even elements: " << evencount<<"\n";
    cout << "Total odd elements: " << oddcount;
    return 0;
}