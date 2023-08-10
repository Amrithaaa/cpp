//largest element in a array
#include<iostream>
#include<climits>

using namespace std;
int main()
{
    int a[3],size=3;
    cout<<"enter array elements : ";
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
    cout<<"largest element present in array is :";
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    cout<<max;
    return 0;
}
