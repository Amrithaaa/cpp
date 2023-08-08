//palindrome number

#include <iostream>
using namespace std;

int main() {
    int n,number,rev=0,digit,text,t;
    cout<<"enter a number : ";
    cin>>n;
    number=n;
    cout<<"reversed number in text format ";
    while(n>0)
    {
        digit=n%10;
        n=n/10;
        rev= rev*10 + digit;
    }
    text =rev;
    while(text>0)
    {
       t=text%10;
       text=text/10; 
    switch(t)
          {
            case 1: cout<<"one ";
            break;
            case 2: cout<<"two ";
            break;
            case 3: cout<<"three ";
            break;
            case 4: cout<<"four ";
            break;
            case 5: cout<<"five ";
            break;
            case 6: cout<<"six ";
            break;
            case 7: cout<<"seven ";
            break;
            case 8: cout<<"eight ";
            break;
            case 9: cout<<"nine ";
            break;
            case 0: cout<<"zero ";
            break;
            default: cout<<"not found";
    }
    }
    return 0;
}
