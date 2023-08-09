//sum of array elements


#include <iostream>
using namespace std;

int main() {
    int A[5]={5,89,65,7,9};
    int n=5,sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=i;
    }
    cout<<"sum of array elements are : "<<sum;
    return 0;
}
