#include<iostream>
using namespace std;
int main(){
    int x;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            cout<<x<<"is present";
            break;
        }
    }
    cout<<"Enter the target : ";
    cin>>x;
    return 0;


}