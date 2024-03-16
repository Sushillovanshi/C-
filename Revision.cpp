//===============================================revsers====================
#include<iostream>
using namespace std;
#include<cstring>
int main ()
/*{
    char c[10];
    int n;
    cout<<"enter name \n";
    cin>>c;
    n=strlen(c);
    for (int i=n-1;i>=0;--i)
    {
        cout<<c[i];
    }
}*/

// ==========================================Toglle function ==============================

/*{
    char a[10];
    int b;
    cout<<"enter ur name \n";
    cin>>a;
    b=strlen(a);
    for(int i=0;i<b;++i)
    {
        if (a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
        else if (a[i]>=97 && a[i] <= 122)
        {
            a[i]=a[i]-32;
        }
    }
    cout<<a;

}*/

//==============================pallindrome==================================

{
    char c[10];
    char c2[10];
    cout<<"enter name ";
    cin>>c;
    strcpy(c2,c);
    strrev(c);
    if(strcmp(c,c2)==0)   
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

}