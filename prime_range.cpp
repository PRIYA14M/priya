#include<iostream>
using namespace std;

int main()
{
int n,s,e;
int f=0;
cout<<"enter a range"<<endl;
cin>>s>>e;

for(n=s;n<=e;n++)
{

for(int i=2;i<=n/2;i++)
{
if(n%i == 0)
{
f=1;
break;
}
else
f=0;
}
if(f==0)
cout<<endl<<n;

}

return(0);
}
