#include<iostream>
using namespace std;

void rotate(int ar[],int no)
{
    int temp,i;
    temp=ar[no-1];
    for(i=no-1;i>0;i--)
    {
        ar[i]=ar[i-1];
       
    }
     ar[0]=temp;
    cout<<"\nArray after rotation ";
    for(i=0;i<no;i++)
    {
        cout<<"\n";
        cout<<ar[i];
    }
}
void rightrotate(int ar[],int no,int k)
{
    int i;
    for(i=1;i<=k;i++)
    {
        rotate(ar,no);
    }
}





int main()
{
    int n;
    cout<<"\nEnter the array size";
    cin>>n;
    int a[n],i;
    cout<<"\nEnter the array elements";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
   
    int k;
    cout<<"\nEnter the no of times you want to rotate array";
    cin>>k;
    if(k==1)
    {
        rotate(a,n);
    }
    else
    {
        rightrotate(a,n,k);       

    }
    return 0;

}