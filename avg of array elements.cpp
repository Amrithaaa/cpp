//sum of 2 arrays

#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j,avg,sum=0;  
    int A[5][5];
    cout<<"enter number of rows and coloumns for array1 : ";
    cin>>m>>n;
    cout<<"enter "<<m*n<<" array elements : ";
    for(int i =0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
        cout<<endl;
    }
    cout<<"sum of array elements are : ";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum= sum + A[i][j];
            
        }
    }
    cout<<sum;
    avg= sum/(m*n);
    cout<<"\naverage is : "<<avg;
    
    
        
    
    return 0;
}