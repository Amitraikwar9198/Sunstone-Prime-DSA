#include<iostream>
using namespace std;
int add(int a,int b){
    int sum = a+b;
    return sum;
}
int main(){
    int a,b;
    cout<<"Enter any two numbers : ";
    cin>>a>>b;
    int result = add(a , b);
    cout<<"sum : "<<result;
    return 0;
}