//max value of array elements


#include <iostream>
using namespace std;

int main() {
    int A[5]={5,89,65,7,9};
    int n=5,max;
    max=A[0];
    for(int i=1;i<n;i++)
    {
        if(A[i]>max)
         max=A[i];
    }
    cout<<"max value in arrray is : "<<max;
    return 0;
}
