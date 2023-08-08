//palindrome number

#include <iostream>
using namespace std;

int main() {
    int n,number,rev=0,r;
    cout<<"enter number : ";
    cin>>n;
    number=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev= rev*10 + r;
    }
    cout<<"reversed number is : "<<rev<<endl;
    if(number == rev)
    {
        cout<<" palindrome";
    }
    else
    {
        cout<<"not palindrome";
    }
     

    return 0;
}
