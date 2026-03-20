#include<iostream>
using namespace std;
int main(){
    int arr[]={5,3,6,7,8,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;;
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<" ";

    }
    return 0;

}