#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter column : ";
    cin>>n;
    int m;
    cout<<"Enter row : ";
    cin>>m;
    int j;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
        cout<<i<<" ";
        }
    cout<<endl;
    }
}