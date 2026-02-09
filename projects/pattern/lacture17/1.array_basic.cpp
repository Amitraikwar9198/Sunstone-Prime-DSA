#include<iostream>
using namespace std;
int main(){
    // create 
    //firsr way

    int arr[5]; // by default grabage value hogi aur baad me hum change kar skte hai
    // second way
    int arr_b[]={1,2,3,4,5};// pehle se initialized hai aur baad me change bhi kar sakte hai
    // third way
    int n;
    cin>>n;
    int arr_c[n]; //by default garbage and baad me change bhi kar sakte hai
    return 0;


}