#include<iostream>
using namespace std;

int main()
{
int st,f;
cout<<"Enter a starting and ending values"<<endl;
cin>>st>>f;
cout<<"even numbers are "<<endl;
for(int i=st;i<=f;i++)
{
if(i%2 == 0)
cout<<i<<endl;
}
return(0);
}
