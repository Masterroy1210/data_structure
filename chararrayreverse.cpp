#include<iostream>
using namespace std;

void reverse()
{

}
void charreverse()
{

}



int main()
{
    char a[100];
    int i;
    cout<<"\n enter the string";
    for(i=0;i<100;i++)
    {
        cin>>a[i];
        if(a[i]=='-')
        break;
    }
    cout<<"\n The  entered string is";
    for(i=0;i<100;i++)
    {
        cout<<a[i];
    }

}