#include<iostream>
using namespace std;

void reverse(int arr[],int s,int e,int n)
{
    int i,temp;
    for(i=0;i<n/2;i++)
    {
        temp = arr[e];
        arr[e] = arr[s];
        arr[s] = temp;
        s=s+1;
        e=e-1;
    }
    cout<<"\nArray After reverse ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }

}
int main()
{
    int i,n;
    cout<<"Enter the size of the  array";
    cin>>n;
    int a[n],startindex,endindex;
    cout<<"\nEnter the array elements";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\n The entered array is";
    for(i=0;i<n;i++)
    {
        cout<<"\n";
        cout<<a[i];
    }
    startindex=0;
    endindex=n-1;
    reverse(a,startindex,endindex,n);
    return 0;



}