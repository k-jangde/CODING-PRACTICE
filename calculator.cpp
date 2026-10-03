#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter 1st number"<<endl;
    cin>>x;
    char op;
    cout<<"Enter operator "<<endl;
    cin>>op;
    float y;
    cout<<"Enter 2nd number"<<endl;
    cin>>y;
    switch(op){
        case '+' :
        cout<<x+y<<endl;
        break;
        case '-' :
        cout<<x-y<<endl;
        break;
        case '*' :
        cout<<x*y<<endl;
        break;
        case '/' :
        if (y !=0)
        cout<<x/y<<endl;
        else 
        cout<<"ERROR";
        break;
        default:
        cout<<"INVALID OPERATION"<<endl;
    }
}