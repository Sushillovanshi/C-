#include<iostream>
using namespace std;
//show row and column 
int main()
{
    int r;
    cout<<"enter size of array\n";
    cin>>r;
    //create 2d array for same row and column
    int **arr=new int*[r];
    // create 
    for(int i=0;i<r;++i)
    {
        arr[i]=new int[r];
    }
    // input 
    for (int i=0;i<r;++i)
    {
        for (int j=0;j<r;++j)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"output are\n";
    for(int i=0;i<r;++i){
        for(int j=0;j<r;++j)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    delete []arr;
    arr=NULL;
    }
}