#include<stdio.h>
#include<conio.h>
int main()
{
int num;int sum=0;
cout<<"enter the num";
if(num<1)
cout<<"it is not a natural number";
for(int i=1;i<=num;i++)
{
sum+=1;
}
cout<<"sum of natural number is "<<sum;
return(0);
}