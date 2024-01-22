#include<iostream>
using namespace std;
int main()
{
   float a;
    cout<<"Enter a number: ";
    cin>>a;
    if(a==0)
    {
        cout<<"Zero";
    }

    (a>0)? cout<<"Positive" : cout<<"Negative";


    return 0;
}
