#include<iostream>
using namespace std;
    int factorial (int n) {
    int fact= 1;
    for (int i=1;i<=n;i++) {
    fact =fact*i;
    }
    return fact;
    }
    int ncr ( int n,int r)
    {
        int numinator =factorial(n);
        int denominator = factorial(r)*factorial(n-r);
        return numinator/denominator;
    }
int main()
{
    cout<<" enter the value of n,r"<<endl;
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r)<<endl;
}