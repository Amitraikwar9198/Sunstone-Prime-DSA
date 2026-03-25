// calculate sum of all array 
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    int num= sizeof(arr)/sizeof(arr[0]);
    cout<<num<<"\n";
    cout<<sum;
    return 0;
}