//sum of 2 arrays

#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j;  // m and n are row and coloumns
    int A[5][5],B[5][5],C[5][5];
    cout<<"enter number of rows and coloumns for array1 : ";
    cin>>m>>n;
    cout<<"enter array1 elements : \n";
    for(int i =0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
        cout<<endl;
    }
    cout<<"array 1 elements are : \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"enter array2 elements : \n";
    for(int i =0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>B[i][j];
        }
        cout<<endl;
    }
    cout<<"array 1 elements are : \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"sum of 2 arrays : \n";
    for(int i =0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}