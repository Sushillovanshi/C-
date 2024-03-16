#include<iostream>
using namespace std;
int main()
{
   /* char c[]="";
    cout<<"enter name: ";
    cin>>c;
    cout<<c<<"\n";
    cout<<sizeof(c);*/

    // string cin.getline space also

   /*char d[]="cybrom";
   char a[20];
    cout<<sizeof(d)<<"\n";//6
    cout<<sizeof(a)<<"\n";//5
    cout<<"enter name";
    cin.getline(d,20);
    cout<<"name="<<d;*/
    char c[]="sushil lovanshimandideep ";
    int s=sizeof(c)/sizeof(c[0]);
    cout<<"length="<<s;
} 