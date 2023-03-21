#include<iostream>
using namespace std;
int main(){
    int n,no=2;
    bool prime=1;
    cout<<"enter no ";
    cin>>n;
    if (n<=1){
        cout<<"NOT PRIME";
        return 0;
    }
//    for(no;no<=n/2;no++)
while(no<n)
    {   
        if(n%no==0)
        {
            cout<<"not prime";
           prime=0;
           break;
        }else{no++;}
    }
    if(prime)
        {cout<<"Prime";
        }
        return 0;  
}

