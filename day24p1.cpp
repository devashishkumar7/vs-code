#include<iostream>
using namespace std;
int power ()
{
int a,b;
cin>>a>>b;
int ans =1;
for (int i=1;i<=b;i++)
ans =ans*a;
return ans;
}
int main()
{
    int answer = power ();
    cout<<"answer is "<<answer<<endl;
     int ans1 = power ();
    cout<<"answer is "<<ans1<<endl;
     int ans2 = power ();
    cout<<"answer is "<<ans2<<endl;

    return 0;
}