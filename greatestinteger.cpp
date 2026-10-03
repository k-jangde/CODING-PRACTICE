#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter 1st number : ";
    cin>>x;
    int y;
    cout<<"Enter 2nd number : ";
    cin>>y;
    int z;
    cout<<"Enter 3rd number : ";
    cin>>z;
    if (x>y and x>z)
    cout<<x;
    if (y>x and y>z)
    cout<<y;
    if (z>x and z>y)
    cout<<z;
}