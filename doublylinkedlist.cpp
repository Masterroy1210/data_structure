#include<iostream>
#include<conio.h>
#include<malloc.h>
using namespace std;

struct node
{
    int data;
    struct node *prev;
    struct node *next;
}*head;

void create(int n)
{
 int val;
 struct node *newnode,*temp;
 head= (struct node *) malloc(sizeof(struct node));
 cout<<"\n Enter the data of first node\n";
 cin>>val;
 head->data=val;
 head->prev=NULL;
 head->next=NULL;
 temp=head;
 for(int i=2;i<=n;i++)
 {
     newnode=(struct node*)malloc(sizeof(struct node));
     if(newnode==NULL)
     {
         cout<<"\nUnable to allocate memory";
         break;
     }
     cout<<"\nEnter the value of node no  "<<i<<"\n";
     cin>>val;
     newnode->data=val;
     newnode->prev=temp;
     newnode->next=NULL;
     temp->next =newnode;
     temp=temp->next;

 }

}

void addFirst(int val)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->prev=NULL;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;


}

void addlast(int val)
{
    struct node *last;
    last=head;
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    while(last->next!=NULL)
    {
        last = last->next;

    }
    newnode->data=val;
    newnode->next=NULL;
    newnode->prev=last;
    last->next=newnode;
    cout<<"\n---Element inserted successfully---";

}

int search(int key)
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return 1;
        }
        temp=temp->next;
    }
    return -1;
    
}

void display()
{
    struct node *temp;
    temp=head;
    while(temp->next!=NULL)
    {
        cout<<"  "<<temp->data;
        temp=temp->next;
    }
    cout<<"  "<<temp->data;
}

int main()
{
    int ch;
    do{
        cout<<"\n ----Doubly lnked list menu-----";
        cout<<"\n1.Create Doubly Linked";
        cout<<"\n2.Display";
        cout<<"\n3.Add element in the first position";
        cout<<"\n4.Addd element in the last position";
        cout<<"\n5.Search a element in the Douunly linked list";
        cout<<"\n6.Exit";
        cout<<"\nEnter your choice";
        cin>>ch;
        switch(ch)
        {
            case 1:
                int n;
                cout<<"\nEnter the no of nodes you want innyour linked list";
                cin>>n;
                create(n);
                cout<<"\n---Doubly linked list created successfully";
                break;
            case  2:
                cout<<"\n------DISPLAYING DOUBLY LINKEED LIST-------";
                display();
                break;
            case 3:
                int val;
                cout<<"\n Enter the value you want add at the first position";
                cin>>val;
                addFirst(val);
                cout<<"\n----Element inserted successfully in the doubly linkd list";
                break;
            case 4:
                    int v;
                    cout<<"\n Enter the value you want to add at last position";
                    cin>>v;
                    addlast(v);
                    break;

            case 5:
                int key;
                cout<<"\n Enter the key you want to searcch in the linkedlist";
                cin>>key;
                int result=search(key);
                if(result==1)
                {
                    cout<<"\n---------Element is present in the list-----------";

                }
                else{
                    cout<<"\n---------Element is not present in the key-----------";
                }
                break;    
        }

    }while(ch!=6);
    return 0;
}