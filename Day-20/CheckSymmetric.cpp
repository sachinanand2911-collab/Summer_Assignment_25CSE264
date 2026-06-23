#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter the row of matrix :";
    cin>>r;
    int c;
    cout<<"Enter the coloumn of matrix :";
    cin>>c;
    cout<<"Enter all elements of matrix :"<<endl;
    int arr[r][c];
    int flag=0;
    for(int i=0;i<r;i++){
        for(int j=0 ;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0 ;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]!=arr[j][i]){
                flag=1;
            }
        }
}
 if(flag==1){
            cout<<"The matrix is not symmetric ";
        }
        else
            cout<<"The matrix is symmetric ";
    }
