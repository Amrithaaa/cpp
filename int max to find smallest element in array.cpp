// find smallest element in array using int max


#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int a[3],size=3;
    cout<<"enter array elements :";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"array elements are : {";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"} \n";
    int min= INT_MAX;
    cout<<"the smallest value in array is : ";
    for(int i=0;i<size;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<min;
    return 0;
}