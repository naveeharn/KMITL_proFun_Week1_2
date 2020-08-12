#include<iostream>

using namespace std;

int sum(int a,int b){
    return a+b;
}

int main(){

    int num1,num2;

    cin>>num1>>num2;

    cout<<sum(num1,num2);

    cout<<endl;
    
    return 0;
}