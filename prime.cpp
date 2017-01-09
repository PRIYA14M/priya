#include<iostream>
using namespace std;

int main()
{
int n;
int f=0;
cout<<"enter a number"<<endl;
cin>>n;
for(int i=2;i<=n/2;i++)
{
if(n%i == 0)
{
cout<<n<<" is not a prime number";
f=1;
break;
}
}
if(f==0)
cout<<n<<" is a prime number";
return(0);
}
