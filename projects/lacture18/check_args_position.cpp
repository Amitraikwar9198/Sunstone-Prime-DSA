#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<5; i++){
        cin>>arr[i];
    }
    int value=20;
    
    for(int i=0;i<5;i++){
        
         if(arr[i]==value){
        cout<<"index is "<<i+1<<endl;
        break;
        
    }

    }
   
    return 0;
}