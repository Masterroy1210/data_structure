#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
using namespace std;

struct node{
    int  data;
    struct node *next;
}*head; 

void create(int no)
{   
    int val;
    struct node *newnode, *temp;
    int i;
    head = (struct node*)malloc(sizeof(struct node));
    cout<<"Enter the data of 1st node\n";
    cin>>val;
    head->data=val;
    head->next=NULL;
    temp = head;
for(i=2;i<=no;i++)
{
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        cout<<"\nunbale to allocate memory";
        break;
    }
    cout<<"Enter the valuue of node no "<<i;
    cout<<"\n";
    cin>>val;
    newnode->data=val;
    newnode->next=NULL;
    
    temp->next = newnode;
    temp=temp->next;
}

}



void addFirst(int val)
{
    struct node *newnode;
    newnode =(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next = head;
    head = newnode;
    cout<<"\nElement successfully Added in the start of the linked list-----";
}




void addLast(int val)
{
    struct node* newnode;
    struct node *temp;
    temp=head;
    newnode= (struct node*)malloc(sizeof(struct node));
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next= newnode;
    newnode->data = val;
    newnode->next = NULL;

    cout<<"This is addlast\n";
}



void search(struct node *start,int key)

{
        int count=1;  
        struct node *temp= start;
        while(temp!=NULL)
        {
            if(temp->data==key)
            {
                cout<<"\nelement Present in the linked llist at postion no:-"<<count;
                break;
                
            }
            count=count+1;
            temp = temp->next;
          
        }
        cout<<"'\n Element not present in the list---";
          
}







void display()
{
    struct node* temp;
    temp = head;
    while(temp->next!=NULL)
         {
        cout<<temp->data;
        cout<<"\n";
        temp = temp->next;
    }
    cout<<temp->data;
    cout<<"\n";
}






int main()
{
    int ch;
    do{
    cout<<"linked list\n";
    cout<<"1.create Linkedlist\n";
    cout<<"2.Add first";
    cout<<"\n3.Add last\n";
    cout<<"4.display\n";
    cout<<"\n 5.Searching";
    cout<<"\n6.exit\n";
    cout<<"Enter your choice\n";
    cin>>ch;
    
    
        switch (ch)
        {
        case 1:
        int n;
            cout<<"Enter the no of nodes you want in you linkes list\n";
            cin>>n; 
            create(n);
            cout<<"\nlinked list Create succesfully----";
            break;
        case 2:
            int v;
            cout<<"\nEnter the element you want to add at the start of the linked list";
            cin>>v;
            addFirst(v);
            break;
        case 3:
            int x;
            cout<<"\n Enter the element you want to add at the End of the linked list---";
            cin>>x;
            addLast(x);
            break;
        case 4:
            display();
            break;
        case 5:
            int k;
            cout<<"\n Enter the element you want to search in the linked list";
            cin>>k;
            search(head,k);
            break;
        case 6:
            break;
        
        default:
            break;
        }
    }while (ch!=6);
  
    
    return 0;
}