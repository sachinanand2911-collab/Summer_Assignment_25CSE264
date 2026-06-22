#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int r;
    cout<<"Enter the row of matrix :";
    cin>>r;
    int c;
    cout<<"Enter the coloumn of matrix :";
    cin>>c;
    cout<<"Enter all elements of matrix :"<<endl;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0 ;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
        for(int i=0;i<r;i++){
            sum=sum+arr[i][i];
            }
            cout<<"The Sum of Diagonal Element :"<<sum;
            return 0;
}