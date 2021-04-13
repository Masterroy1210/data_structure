#include<iostream>
using namespace std;

void heapify(int arr[],int index,int size)
{
    int left = 2*index+1;
    int right =left+1;
    int min = index;

    if(left<=size && arr[left]<arr[min])
        min = left;
    

    if(right<=size && arr[right]<arr[min])
        min =right;


    if(index!=min)
    {
        int temp;
        temp=arr[min];
        arr[min]=arr[index];
        arr[index]=temp;
        heapify(arr,min,size);
    }




}


void build_heap(int arr[],int size)
{
    int i ;
    for(int i=size/2;i>=0;i--)
    {
        heapify(arr,i,size);
    }
    cout<<"\nHeap after processing is";
    for(int j=0;j<=size;j++)
    {
        cout<<"\n"<<arr[j]<<endl;
    }
}


void deletemin(int arr[],int size)
{
    int temp;
    temp=arr[size];
    arr[size]=arr[0];
    arr[0]=temp;
    cout<<"\nMinimum element poped out of the heap is"<<arr[size]<<endl;
    size =size-1;
    heapify(arr,0,size);

    
}







int main()
{
    int n;
    cout<<"\nEnter the size of the heap";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the heap elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    build_heap(arr,n-1);
    return 0;

}
