#include<iostream>
using namespace std;
int main()
{
    char str[20] = "";
    cout<<"Enter ur name: ";
    cin>>str;

    for (int i=0; str[i] != '\0';i--)
    {
        str[i] =str[i];
    }
    cout<<str;



}