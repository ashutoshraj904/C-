#include<iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    cin>>n;
    while (i<=n) //column
    {   
       int j=1; //row
        while (j<=n)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
        }
    }
    