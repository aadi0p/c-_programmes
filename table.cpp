#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    
    cout<<"enter a value to genrate the table : ";
    cin >>a;
    
    cout<<"\ntable of :" <<a;
    
    for(b=1;b<=10;b++)
    {
        c=a*b;
        cout<<a<<"*"<<b<<"="<<c<<endl;
    }
}

