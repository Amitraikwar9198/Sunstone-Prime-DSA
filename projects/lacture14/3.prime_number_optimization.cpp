#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
n=10;
bool ans = true;
for(int i = 2; i <= sqrt(n); i++){
if(n%i==0){
ans = false;
break;
}
}
if(!ans){
cout<<"Not prime number";

}else{
cout<<"prime number";
}
}
