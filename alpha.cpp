#include<iostream>
using namespace std;
int main()
{
char c;
cout<<"Enter a char "<<endl;
cin>>c;
if((c >= 'a' && c <='z') || (c >='A' && c <= 'Z'))
cout<<c<<" is an alphabetic";
else
cout<<c<<" is not an alphabetic";
return(0);
}
