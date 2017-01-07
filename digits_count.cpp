#include<iostream>
using namespace std;
int main()
{
int n,d,c=0;
cout<<"Enter a n"<<endl;
cin>>n;
d=n;
do
{
++c;
n = n / 10;
}while(n!=0);
cout<<d<<" is "<<c<<" digits";
return(0);
}
