#include<iostream>
using namespace std;
int main()
{
int n,p;
float s=1.0;
cout<<"enter a number"<<endl;
cin>>n;
cout<<"enter a power"<<endl;
cin>>p;
if(p==0)
cout<<"power of "<<n<<" is 1";
if(p>0)
{
for(int i=0;i<p;i++)
s*=n;
cout<<"power of "<<n<<" is "<<s;
}
if(p<0)
{
for(int i=0;i>p;i--)
s*=n;
s=1/s;
cout<<"power of "<<n<<" is "<<s;
}


return(0);
}
