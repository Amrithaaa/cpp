//factorial of a number using for loop c++

#include <iostream>
using namespace std;

int main() {
    int n,fact=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    
    {
        fact *= i;
       // sum=sum+i;
       // sum=(n*(n+1))/2;
    }
    cout<<n<<"!="<<fact<<endl;
   
    return 0;
}
