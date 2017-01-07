#include<stdio.h>
#include<conio.h>
int main()
{
int n;
int f=0;
cout<<"enter a number";
cin>>n;
for(int i=2;i<=n/2;i++)
{
if(n/i==0)
{
cout<<"not a prime";
f=1;
break;
}
}
if(f==0)
cout<<"is a prime";
return(0);
}
