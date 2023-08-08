//reverse a number

#include <iostream>
using namespace std;

int main() {
    int n,rev=0,number;
    cout<<"enter a number:";
    cin>>n;
    number = n;
    cout<<"reversed format of "<<number<<" is : ";
    while(n>0)
    {
        rev=n%10;
        n=n/10;
        cout<<rev;

    }

    return 0;
}
