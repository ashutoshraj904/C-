#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    int no=1;
    int factorial=1;
    while (no<=n)
    {

    if (no<=n){
        cout<<"\nnumber "<<no;
        factorial*=no;
        cout<<"\nFactorial = "<<factorial;
        no++;
    }else{
        cout<<"factorial "<<factorial;
    }
    }
    
     
}
