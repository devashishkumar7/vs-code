#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
int m;
cout<<"enter the number of columns"<<endl;
cin>>m;
for (int i=0; i<=n; i++)
{
    for (int j=0; j<=i; j++)
    {
      cout<<"*";
    }
    cout<<endl;
}

}