#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter Mark: ";
    cin>>a;
    if(a>=60 && a<101)
        cout<<"First Division";
    else if(a>=50 && a<=59)
        cout<<"Second Division";
    else if(a>=40 && a<=49)
        cout<<"Third Division";
    else if(a<40 )
        cout<<"Fail";
    else
        cout<<"Invalid !"<<endl<<"Please input 1-100.";

}
