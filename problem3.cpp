#include <iostream>
using namespace std;

int main() {
    int m,n,t;
    cout<<"m=";
    cin>>m;
    cout<<"n=";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>arr[i][j];
        }
    }
    cout<<"t=";
    cin>>t;
    for(int i=0;i<t;i++) {
        int row, col, value;
        cin>>row>>col>>value;
        arr[row-1][col-1]=value;
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}