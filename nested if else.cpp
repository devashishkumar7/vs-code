#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the three numbers ";
    cin>>a>>b>>c;
if(a>b)
{
  if (a>c)
  {
    cout<<"the largest number is "<<a<<endl;
  }
   else {
    cout<<"the greatest number is "<<c<<endl;
   }
}
else
{
    if (b>c)
    {
    cout<<"the greatest number is "<<b<<endl;
    }
    else
    {
    cout <<"the greatest number is "<<c<<endl;
    }
}
}
