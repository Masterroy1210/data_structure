#include<iostream>
using namespace std;

 int top=-1;
  int size;
    
   

int push(int val,int st[])
{
  if(top==size-1)
  {
      cout<<"--Stack Overflow---";
      return 0;
  }  
  else
  {
    top=top+1;
    st[top]=val;
  }

}



int pop(int st[])
{
    if(top==-1)
    {
        cout<<"\n---Stack Underflow---";
        return 0;

    }
    else
    {
        cout<<"\nElement Poped Out of stack is --"<<st[top];
        top=top-1;
    }
}









int main()
{
   
    int ch;
     int st[size];
    cout<<"\nEnter the size of the Stack";
    cin>>size;

    do{
        cout<<"\n----Stack Operations---";
        cout<<"\n1.Push";
        cout<<"\n2.Pop";
        cout<<"\n3.Exit";
        cout<<"\nEnter yourr choice--";
        cin>>ch;
        switch(ch)
        {
            case 1:
                int n,val;
                cout<<"\nEnter the no of values you want to push into the stack";
                cin>>n;
                for(int i=0;i<n;i++)
                {
                    cin>>val;
                    push(val,st);
                }
                cout<<"\nElements pushed successfully----";
                break;
                
            case 2:
                pop(st);
                break;
            
            case 3:
                break;

        }

    }while(ch!=3);
    


    return 0;



}