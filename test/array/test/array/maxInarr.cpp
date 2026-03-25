#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    int mx=INT_MIN;
    int smx=INT_MIN;
    int max = INT_MAX;
    int smax = INT_MAX;
    for(int i=0; i<n; i++){
        if(mx<arr[i]) mx=arr[i];
        if(max>arr[i]) max=arr[i];
    }
    
    for(int i=0; i<n; i++){
        if(smx<arr[i] && arr[i]!=mx) 
            smx=arr[i];
        if(smax>arr[i] && arr[i]!=max) 
            smax=arr[i];
    }
    cout<<mx<<" "<<smx <<"\n";
    cout<<max <<" "<<smax;
    return 0;
}