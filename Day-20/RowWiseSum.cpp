#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter the row of matrix :";
    cin>>r;
    int c;
    cout<<"Enter the column of matrix :";
    cin>>c;
    int arr[r][c];
      for(int i=0;i<r;i++){
        for(int j=0 ;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum = sum + arr[i][j];
        }
        cout<<"The row wise sum of matrix is :"<<sum<<endl;
    }
}