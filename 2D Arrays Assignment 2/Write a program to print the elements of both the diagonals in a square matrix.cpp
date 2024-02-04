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
    int i,j;
   cout<<"The elements in the array:"<<endl;
    for( i=0;i<n;i++)
    {
    for( j=0;j<m;j++)
    {
      if(i==j || i+j==n-1)
      {
        cout<<a[i][j]<<" ";
      }
      else
      cout<<" "<<" ";
    }
    cout<<endl;
    }

}