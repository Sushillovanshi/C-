/*#include<iostream>
using namespace std;
void even(int s,int e)

{
    for(s;s<=e;++s)
    {
        if(s%2==0)
        {
            cout<<s;
            if(s<e-1)
            {
                cout<<",";
            }
        }
    }

}
int main()
{
    int start,end;
    cout<<"Enter the start point:";
    cin>>start;
    cout<<"Enter the end point:";
    cin>>end;
    even(start,end);
}*/


#include<iostream>
using namespace std;
void swp(int &s,int &e)
{
    int tmp;
    tmp;
    s=e;
    e=tmp;
}
int main()
{
    int s,e;
    cout<<"Enter 1st number\n";
    cin>>s;
    cout<<"Enter 2nd munder\n";
    cin>>e;
    swp(s,e);
    cout<<"s = "<<s<<endl;
    cout<<"e = "<<e;

}

 