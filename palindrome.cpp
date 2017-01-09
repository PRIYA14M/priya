#include<iostream>
using namespace std;
int main(){
    int n,r,s=0,d;
    cout<<"Enter a number"<<endl;
    cin>>n;
    d=n;
   for(int i=0;n!=0;i++)
     {
         r = n%10;
         n = n/10;
         s = s*10 + r;
    }
    if(d==s)
         cout<<d<<" is Palindrome"<<endl;
    else
                  cout<<d<<" is not a Palindrome"<<endl;

    return 0;
}
