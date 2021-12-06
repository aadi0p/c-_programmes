#include<iostream>
using namespace std;

int main(){
    int age;
    
    cout <<"enter your age : ";
    cin >>age;
    
    cout <<"\nyour age is :" <<age;
    
    if(age>=18){
        cout <<"\nyou are eligible for voting";
    }
    
    else{
        cout <<"\nerror your are not eligible for voting\a";
    }
}


