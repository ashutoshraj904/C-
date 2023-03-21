#include<iostream>
using namespace std;
int main(){
    int n,no=2,sum=0;
    cout<<"enter n ";
    cin>>n;
    while (no<=n)
    {
        sum+=no;
        no+=2;
    }
       cout<<"SUM "<<sum; 
    
}