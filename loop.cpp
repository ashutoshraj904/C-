#include<iostream>
using namespace std;
int main(){
    int no=1,n,sum=0;
    cout<<"enter no ";
    cin>>n;
    while (no<=n)
    {
        sum+=no;
        no++;
        cout<<"\nSUM = "<<sum;
    }
    
}