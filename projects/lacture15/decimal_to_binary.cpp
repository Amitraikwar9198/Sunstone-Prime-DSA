#include<iostream>
using namespace std;
int rev(int n){
    int rev = 0;
    while(n>0){
        rev = rev*10 + n%10;
        n = n/10;
    }
    return rev;
}
int main(){
int bn = 1;
int n;
cin>>n;
while(n>0){
int k = n%2;
bn = bn*10+k;
n = n/2;

}
cout<<rev(bn)/10<<endl;
return 0;

}