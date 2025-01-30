#include<iostream>
using namespace std;
int main ()
{
int n;
cout<<"enter the nuber of rows "<<endl;
cin>>n;
int m;
 cout<<"enter the number of columns"<<endl;
 cin>>m;
for(int i=1;i<=n;i++)
{

    for(int j=1;j<=m;j++)
    {
      
          cout<<" "<<(char)(j+64);
       
    }
    cout<<endl;
}
 
}