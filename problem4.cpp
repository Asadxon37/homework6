#include <vector>
#include <iostream>
using namespace std;
bool carPark(vector<int> &park, int n) {
    int count =0;
    for(int i =0; i < park; ++i) {
        if(park[i] == 0&&(i==0||park[i-1]==0)&&(i==park.size()-1||park[i+1]==0)) {
            park[i]=1;
            count++;
            i++;
        }
        if(count>=n) {
            return true;
        }
    }return count>=n;
}
int main() {
    int inp;
    vector<int> park;
    char ch;
    cout<<"n=";
    cin >> inp;
    while(cin>>ch&&ch!='!') {
        park.push_back(ch-'0');
    }
    if(carPark(park, inp)) {
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }
}


