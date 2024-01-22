#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter  character: ";
    cin>>a;
    int b=int(a);
    if(b>96 && b<123)
        cout<<"This is small letter!";
    else if(b>64 && b<91)
        cout<<"This is capital letter!";
    else if(b>48 && b<57)
        cout<<"This is digit";
    else
        cout<<"This is special symbol!";


    return 0;
}
