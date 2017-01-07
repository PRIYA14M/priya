#include<stdio.h>
#include<conio.h>
int main()
{
int num;
int flag=0;
cout<<"enter a number";
cin>>num;
for(int i=2;i<=num/2;i++)
{
if(num/i==0)
{
cout<<"not a prime";
flag=1;
break;
}
}
if(flag==0)
cout<<"num is a prime";
return(0);
}