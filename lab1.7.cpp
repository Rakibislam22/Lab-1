#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter number a and b: ";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swap, a= "<<a<<" and b= "<<b;


    return 0;
}
