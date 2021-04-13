#include<iostream>
using namespace std;





 heapify(int arr[],int index,int size)
 {
     int left = 2 * index + 1;
     int right = left+1;
        
        
        int max= index;
    
    if(left<=size && arr[left]>arr[max])
    {
        max=left;
    }
    if(right<=size && arr[right]>arr[max])
    {
        max=right;
    }
    while(index!=max)
    {
        swap(arr[max],arr[index]);
        heapify(arr,max,size);
    }
 }


 buildHeap(int arr[],int size)
 {
     int i;
     for(i=size/2;i>=0;i--)
        {
            heapify(arr,i,size);
        }

    
 }



int main()
{
    int n,size;
    cout<<"\n Enter the no of nodes you want in your heap";
    cin>>n;
    int arr[n],i;
    cout<<"\nEnter the elements off heap";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    buildHeap(arr,n-1);
    cout<<"\nArray after building heap -------";
    for(i=0;i<=size;i++)
    {
        cout<<arr[i];
    }

    return 0;    
}



