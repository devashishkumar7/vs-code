#include<iostream>
using namespace std;
int main (){
    cout<<"enter the number"<<endl;
    int n;
    cin>>n;
    int count =0;
    while (n>0){
   n= n/10;
    count ++;
    
}
cout<<"number of digit:" << count << endl;
}