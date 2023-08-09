// Linear search 


#include <iostream>
using namespace std;

int main() {
    int size,key;  // size ofan array and key to search;
    cout<<"enter the size of array : ";
    cin>>size;
    int main_array[size];
    cout<<"enter array elements: "<<"\n";
    for(int i=0;i<size;i++)
    {
        cin>>main_array[i];
    }
    cout<<"arry elements are : \n";
    for(int i=0;i<size;i++)
    {
        cout<<"a["<<i<<"] = "<<main_array[i]<<"\n";
    }
    cout<<"enter the key to search : ";
    cin>>key;
   
    int temp_array[50],j=0,count=0;  //temp array to store index 
    
    for(int i=0;i<size;i++)
    {
        if(key == main_array[i])
        {
            temp_array[j] = i;
            j++;
            count++;
        }
    }
    cout<<"key element "<<key<<" found with index ";
    if(count>0)
    {
        size = count;
        for(int i=0;i<size;i++)
        {
           cout<<"["<<temp_array[i]<<"]"<<" ";  
        }
       
    }
    else
    {
        cout<<"key not present";
    }
    
    return 0;
}
