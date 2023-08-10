// counting positive and negative integer in array


#include <iostream>
using namespace std;

 int main()
 {
     int size;
     cout<<"enter size : ";
     cin>>size;
     int a[size], pcount=0,ncount=0,b[10],c[10],k=0,j=0;
     cout<<"enter array elements : ";
     for(int i=0;i<size;i++)
     {
         cin>>a[i];
     }
     cout<<"array elements are : { ";
     for(int i=0;i<size;i++)
     {
         cout<<a[i]<<" ";
     }
     cout<<"}\n";
     cout<<"number of positive elements in array are : {";
     for(int i=0;i<size;i++)
        {
             if(a[i]>0)
             {   b[j] = a[i];
                 pcount++;
                 j++;
             }
             else
             {
                 c[k]=a[i];
                 ncount++;
                 k++;
             }
        }
       
    size=pcount;
    for(int j=0;j<size;j++)
         {
             cout<<b[j]<<" ";
         }
    cout<<"} \n" ;     
    cout<<" total number of positive elements : "<<pcount<<"\n"; 
    cout<<"negative elements present in array are : { ";
    size=ncount;
    for(int k=0;k<size;k++)
    {
        cout<<c[k]<<" ";
    }
    cout<<"}\n";
    cout<<"total number of negative elements : "<<ncount;
    return 0;
 }
