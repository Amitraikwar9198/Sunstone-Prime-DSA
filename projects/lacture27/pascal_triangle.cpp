#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int n=1;
    for(int i=1; i<=num; i++){
        for(int j=1;j<=num-i;j++){
            cout<<" ";

        }
        for(int j=0; j<=i; j++){
            cout<<n<<" ";
            n=n*(i-j)/(j*1);

        }
        cout<<endl;
    }
    return 0;
}