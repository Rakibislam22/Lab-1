#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter a Alphabet: ";
    cin>>a;
    int x= tolower(a);
    if(x=='a'||x=='e' ||x=='i'||x=='o'||x=='u')
        cout<<"Vowel!";
    else
        cout<<"Consonant!";


    return 0;
}
