#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int brr[5];
    int crr[5];
    int k = 0;

    cout<<"Enter the elements of first array: ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    cout<<"Enter the elements of second array: ";
    for(int i=0; i<5; i++){
        cin>>brr[i];
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){

            if(arr[i] == brr[j]){

                int count = 0;
                for(int l=0; l<k; l++){
                    if(arr[i] == crr[l]){
                        count++;
                    }
                }

                // store only unique common elements
                if(count == 0){
                    crr[k] = arr[i];
                    k++;
                }
            }
        }
    }

    cout<<"Common unique elements are: ";
    for(int i=0; i<k; i++){
        cout<<crr[i]<<" ";
    }

    return 0;
}