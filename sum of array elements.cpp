
#include <iostream>

using namespace std;

int main()
{
    int size,sum=0;
    cout<<"enter array size : ";
    cin>>size;
    int a[size];
    cout<<"enter array elements:";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"array elements are : { ";
    for(int i=0;i<size;i++)
    {
       cout<<a[i]<<", ";
    }
    cout<<"} \n";
    cout<<"sum of array elements are : ";
    for(int i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum;
    return 0;
}

 