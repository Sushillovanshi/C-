#include<iostream>
using namespace std ;
#include<cstring>
int main()
{
/*for (int i=0;i<=100;++i)
    {
        cout<<i<<"="<<char(i)<<"\t";
    }*/

    // upper case to lower case 

    char c[10];
    int len;
    cout<<"enter ur name: ";
    cin>>c;
    len=strlen(c);
    for (int i=0;i<=len;++i)
    {
        c[i]=c[i]+32;
        
    }
    cout<<c; 

}