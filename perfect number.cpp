//perfect number

#include <iostream>
using namespace std;

int main() {
    int n,sum=0;
    cin>>n;
    cout<<"factors of "<<n<<" are :"<<endl;
    for(int i=1;i<n;i++)
    {
         if( n%i==0)
         {
            cout<<i<<" ";
            sum=sum+i; 
         }
    }
    cout<<"\nsum of divisors are "<<sum<<"\n";
    if(n == sum)
    {
        cout<<"perfect number";
    }
    else
    cout<<"not perfect number";
 
    return 0;
}
