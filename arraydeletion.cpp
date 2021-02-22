#include<iostream>
using namespace std;
int main()
{
    int i,n,no,index;
    cout<<"\nEnter  the arrray size\n";
    cin>>n;
    int a[n];
    cout<<"\nEnter the array elements\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The entered  array  elements are\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i];
        cout<<"\n";

    }
    cout<<"Enter the elemment you want to delete\n";
    cin>>no;
    for(i=0;i<n;i++)
    {
      if(a[i]==no)  
      {
          index=i;

      }
    
    }
    for(i=index;i<n-1;i++)
    {
        a[i]==a[i+1];
    }

    for(i=0;i<n;i++)
    {
        cout<<a[i];
        cout<<"\n";

    }
    return 0;


}