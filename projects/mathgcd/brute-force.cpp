#include<iostream>
using namespace std;
int main(){
int ans=1;
int a,b;
cin>>a>>b;
for(int i=1; i<=min(a,b) ; i++){
if(a%i==0 and b%i==0){
ans=i;
}
}
cout<<ans<<endl;
return 0;
}