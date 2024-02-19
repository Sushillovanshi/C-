#include<iostream>
using namespace std;
int main()
{
int a[]={23,4,2,1,25,36,69,3,85,93,100};
int k=sizeof(a)/sizeof(a[0]);
for(int i=0;i<k;++i)
{
    cout<<a[i]<<"\n";
}



}
// ===================Singal array  example ===========================//

  /*  int a[5];
    a[0]=23;
    a[1]=3;
    a[2]=65;
    a[3]=90;
    a[4]=12;
    for(int i=0;i<5;++i)     
    {
        cout<<a[i]<<"\n";
    }
}*/
