//amstrong number

#include <iostream>
using namespace std;

int main() {
    int n,digit,sum=0,number;
    cout<<"enter number";
    cin>>n;
    number=n;
    while(n>0)
    {
        digit=n%10;  //795  79  5
        n=n/10;
        sum = sum + (digit*digit*digit);
    }
    cout<<"sum of cubes of digits are : "<<sum<<" ";
    if(sum == number)
     cout<<"amstrong";
    else
     cout<<"not amstrong";
    return 0;
}
