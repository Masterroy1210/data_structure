#include<iostream>
using namespace std;


 #define size 5
 int arr[size];

void init()
{
    int i;
    for(i=0;i<size;i++)
    {
        arr[i]=-1;
    }
}







int insert(int value)
{
    int key;
    key = value%size;
    int index=key;
    

    while(arr[index]!= -1)
    {
        index = (index+1) % size;


        if(index==key)
        {
            cout<<"\nThe hash is full";
            return 0;

        }
        
    }
    
arr[index]=value;
        return 1;


}

void display ()
{
    int i;
   cout<<"---Hash table---"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<arr[i];
        cout<<endl;
    }

}

int del(int value)
{
    int key= value%size;
    int index = key;
    while(arr[index]!=value)
    {
        index = (index+1)%size;
        if(index ==key)
        {
            return 0;
        }
    }
    arr[index]=-1;
    return 1;
}











int main()
{
    int k,v;
 
    for(int i=0;i<size;i++)
    {
         cout<<"\nEnter the key to be inserted in the hash table";  
            cin>>k;
        insert(k);
    }
    display();
    cout<<"\nEnter the value you want to delete from the hash table";
    cin>>v;
    del(v);
    cout<<"\n ----Hash After Deletion ---"<<endl;
    display();

    return 0;
}
