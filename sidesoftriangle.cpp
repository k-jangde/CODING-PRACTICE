#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter your first number : ";
    cin>>x;
    int y;
    cout<<"Enter your second number : ";
    cin>>y;
    int z;
    cout<<"Enter your third number : ";
    cin>>z;
    if (x+y>z and x+z>y and y+z>x)
    cout<<"Can be the sides of a triangle.";
    else
    cout<<"Not a triangle.";
}