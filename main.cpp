//Multiplication Table using for loop c++

#include <iostream>
using namespace std;

int main() {
    int n,i;
    cin>>n;
    for(i=1;i<=10;i++)
    {
        cout<< i<<" * "<<n<<" = "<<i*n<<endl;
    }
   
    return 0;
}