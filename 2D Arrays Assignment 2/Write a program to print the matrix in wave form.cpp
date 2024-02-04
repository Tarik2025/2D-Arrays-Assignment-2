#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the no of Rows and Columns respectively:"<<endl;
    cin>>n>>m;
    int a[n][m];
    cout<<"Enter elements in the array:"<<endl;
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    {
      cin>>a[i][j];
    }
    }
    cout<<"The elements in the array:"<<endl;
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<"the wave elements are:"<<endl;
    for(int j=0;j<n;j++)
    {
        if(j%2==0)
        {
            for(int i=n-1;i>=0;i--)
            {
                cout<<a[i][j]<<" ";
            }
        }
        else
        for(int i=0;i<n;i++)
        {
            cout<<a[i][j]<<" ";
        }
    }
}