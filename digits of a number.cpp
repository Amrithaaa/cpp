//digits of a number

#include <iostream>
using namespace std;

int main() {
    int n,digit;
    cin>>n;
    while(n>0)
    {
        digit=n%10;  //795  79  5
        n=n/10;
        cout<<digit<<" ";
    }
    
    return 0;
}
