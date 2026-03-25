#include<iostream>
using namespace std;   
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin >> n;
    int sum = 0;
   while (n>0)
   {
    int k = n % 10;
    sum = sum + k;
    n = n / 10;
   }

   cout<<"Sum of digits is: "<<sum<<endl;

    return 0;
}