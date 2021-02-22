#include<iostream>
using namespace std;
int removeduplicates(int arr[],int no)
       {
    
        if(no==0||no==1)
        {
        return no;
        }

        int len=0,i;
        for(i=0;i<no-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
             arr[len++]=arr[i];
        }

    }
        arr[len++]=arr[no-1];
        cout<<"\nlength of array afteer deletion is\n"<<len;
        for(i=0;i<len;i++)
        {
            cout<<"\n";
            cout<<arr[i];
            cout<<"\n";

        }
       }
int main()
{
    int n,j;
    cout<<"Enter the array size\n";
    cin>>n;
    int a[n];
    cout<<"Enter array elements\n";
    for(j=0;j<n;j++)
    {
        cin>>a[j];
        cout<<"\n";
    }
    cout<<"The array elementss are\n";
    for(j=0;j<n;j++)
    {
        cout<<a[j];
        cout<<"\n";
    }
        removeduplicates(a,n);
        

}

     
    
     