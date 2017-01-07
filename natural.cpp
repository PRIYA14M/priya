#include<stdio.h>
#include<conio.h>
int main()
{
int n;int s=0;
cout<<"enter the number";
if(n<1)
cout<<"it is not a natural number";
for(int i=1;i<=n;i++)
{
s+=1;
}
cout<<"sum of natural number is "<<s;
return(0);
}
