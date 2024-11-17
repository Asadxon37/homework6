#include <iostream>
using namespace std;

int main() {
    int m,n;
    cin>>m>>n;
    double arr[m][n];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>arr[i][j];
        }
    }
    double avg[m];
    for(int i=0;i<m;i++) {
        double sum=0;
        for(int j=0;j<n;j++) {
            sum+=arr[i][j];
        }
        avg[i]=sum/n;
    }
    double colAvg[n];
    for(int i=0;i<n;i++) {
        double sum1=0;
        for(int j=0;j<m;j++) {
            sum1+=arr[i][j];
        }
        colAvg[i]=sum1/m;
    }
    double Avg=avg[0];
    bool isAvg=true;
    for (int i=0;i<m;i++) {
        if(avg[i]!=Avg) {
            isAvg=false;
            break;
        }
    }
    for(int i=0;i<n;i++) {
        if(avg[i]!=Avg) {
            isAvg=false;
            break;
        }
    }
    if(isAvg) {
        cout<<"YES"<<endl;
    }else{cout<<"NO"<<endl;}
}


