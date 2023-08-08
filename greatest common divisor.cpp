//greatest common divisor

#include <iostream>
using namespace std;

int main() {
    int n,m,num1,num2;
    cout<<"enter 2 numbers : "<<endl;
    cin>>n>>m;
    num1=n;
    num2=m;
    while(m!=n)
    {
        if(m>n)
         m=m-n;
        else if(n>m)
         n=n-m;
    }
    cout<<"Greatest Common Divisor of "<<num1<<" and "<<num2<<" is "<<m;
    return 0;
}
