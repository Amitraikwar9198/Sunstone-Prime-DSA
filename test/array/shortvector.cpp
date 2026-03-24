#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[5]={6,2,7,4,1};
     //update element
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr[2]=90;
    int sum=0;
    for(int i=0; i<5; i++){

        cout<<arr[i]<<" ";
        sum+=arr[i];

    }
    cout<<endl<<"sum = "<<sum;
    int max=arr[0];
    for(int i=0; i<5; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<endl<<"maximum : "<<max;

    int min=arr[0];
    for(int i=0; i<5; i++){
        if(arr[i]<min){
            min= arr[i];
        }
    }
    cout<<endl<<"min "<<min;

    

    return 0;
}