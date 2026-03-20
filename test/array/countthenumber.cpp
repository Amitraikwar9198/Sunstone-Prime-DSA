#include<iostream>
using namespace std;
int main(){
    int n;
    int count;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    int x;
    cin>>x;
    for(int i=0 ; i<n ; i++){
        if(arr[i]>x) count++;
    }
    cout<<count;
    return 0;
}