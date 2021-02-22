#include<iostream>
using namespace std;
int main()
{
    int i,pos,element,n;
    cout<<"\nEner the array size\n";
    cin>>n;
    int a[n];
    cout<<"\nEnter the array elements\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The entered array elements are";
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<a[i];
    }
    cout<<"\nEner the  position you want to insert the new  element\n";
    cin>>pos;
    cout<<"\nEnter the element you want to insert at  the position\n";
    cin>>element;
    for(i=n;i>pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=element;
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<a[i];
        cout<<"\n";
    }
    return 0;



}