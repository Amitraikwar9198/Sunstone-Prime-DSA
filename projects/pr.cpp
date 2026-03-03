#include<iostream>
using namespace std;
int add(int a,int b){
    int sum = a+b;
    return sum;
}
int subtract(int c, int d){
    int sub=c-d;
    return sub;
}
int main(){
    int a,b,c,d;
    cout<<"Enter any two numbers : ";
    cin>>a>>b>>c>>d;
    int result = add(a , b);
    int result1 = subtract(c,d);

    cout<<"sum : "<<result;
    cout<<"\nSubtract : "<<result1;
    return 0;
}