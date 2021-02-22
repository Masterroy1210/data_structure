#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<iostream>
using namespace std;
 struct node
     {
         int data;
         struct node *next;
     };
    

 

 int main()
 {
    int n;
     struct node *head;
struct node *middle;
struct node *last;

head = (struct node*)malloc(sizeof(struct node));
middle = (struct node*)malloc(sizeof(struct node));
last = (struct node*)malloc(sizeof(struct node));

     head->data =10;
     middle->data = 20;
     last->data=30;

     head->next = middle;
     middle->next = last;
     last->next  =NULL;
     display();
    cout<<"\n Enter the element you want to add at beginning of the linked list";
    cin>>n;
    addfirst(n);
    cout<<"\nLinked list afftr ading the elemennt at first";
    display();
    void addfirst(int val)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next =head;
    head = newnode;
}
void display()
{
struct node *temp;
     temp = head;
     while(temp!=NULL)
     {
         printf("%d",temp->data);
         temp = temp->next;
     }
}

     
     return 0;


}