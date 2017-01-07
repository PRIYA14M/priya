#include<iostream>
using namespace std;

int main()
{
int n,s=0;
cout<<"Enter the n"<<endl;
cin>>n;
for(int i=1;i<=n;i++)
{
s+=i;
}
cout<<"Sum of natural number is "<<s;
return(0);
}
