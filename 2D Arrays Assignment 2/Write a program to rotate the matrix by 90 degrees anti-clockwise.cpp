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
    
    cout<<"the rotated matrix is :"<<endl;
    for(int j=m-1;j>=0;j--)
    {
        for(int i=0;i<n;i++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}