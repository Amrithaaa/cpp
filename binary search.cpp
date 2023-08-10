#include<iostream>
using namespace std;
int main()
{
    int size,key;
    cout<<"enter the size of the array : ";
    cin>>size;
    int a[size];
    cout<<"enter "<<size<<" elements to array : ";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"array elements are : a["<<size<<"] = { ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<", ";
    }
    cout<<"}";
    
    cout<<"enter a key for binary search : ";
    cin>>key;
    int first,last,middle;
    first = 0;
    last = size-1;
    
    
    while(first<=last)
    {
        middle = (first+last)/2;
        if(key == a[middle])
        {
            cout<<"key found at index = "<<middle;
            return 0;
        }
        else if(key < a[middle])
        {
            last = middle-1; 
            middle = (first+last)/2;
        }
        else
        {
            first = middle+1;
            middle = (first+last)/2;
        }
    }
    cout<<"key not found";
    
    return 0;
    
}