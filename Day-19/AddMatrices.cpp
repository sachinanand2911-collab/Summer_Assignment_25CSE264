#include<iostream>
using namespace std;
int main(){
    int arr[2][2];
    int brr[2][2];
    cout<<"Enter the elements of 1st Matrices :";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the elements of 2nd Matrices :";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>brr[i][j];
        }
    }
    int res[2][2];
      for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            res[i][j]= arr[i][j]+brr[i][j];
        }
    }
    cout<<"The Addition of two Matrices is :"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<" "<<res[i][j];
        }
        cout<<endl;
    }
}