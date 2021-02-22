#include<iostream.h>
#include<math.h>

void main()
{
    int n,i;
    cout<<"Enter the  no to check whether it is prime or not";
    cin>>n;
    for(i=0;i<sqrt(n);i++)

    {
        if(n%i==0)
        break;
    }
    if(i>sqrt(n))
    {
        cout<<n<<"is prime number";

    }
    if(i<sqrt(n))
    {
        cout<<n<<"is not a prime number";
    }


}