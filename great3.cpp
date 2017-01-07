#include<iostream>
using namespace std;
int main()
{
int d,e,f;
cout<<"Enter three numbers"<<endl;
cin>>d>>e>>f;
if(d>e && d>f)
cout<<d<<" is a greatest number";
else if(e>f)
cout<<e<<" is a greatest number";
else
cout<<f<<" is a greatest number";
return(0);
}
