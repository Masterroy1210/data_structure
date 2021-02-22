#include<iostream>
using namespace std;
int search(int arr[],int no,int k)
{
    int i;
    for(i=0;i<=no;i++)
    {
        if(arr[i]==k)
        {
            cout<<"\nElement found at index"<<i;

        }
        else{
            cout<<"\nEntered value not present in the index"<<i;
        }
    }

}


int main()
{
    int n;
    cout<<"\nEnter the  size of the array";
    cin>>n;
    int a[n],i,key;
    cout<<"\nEnter the arrray elements ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout<<"\n Enter the key to be searched";
    cin>>key;
    search(a,n,key);

}