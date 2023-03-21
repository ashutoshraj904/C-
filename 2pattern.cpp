#include<iostream>
using namespace std;
int main(){
    int n,a=1;
    int i=1;
    cin>>n;
    while (i<=n) //column
    {   
       int j=1; //row
        while (j<=n)
        {
            cout<<a;
            j++;
        }
        cout<<endl;
        a++;
        i++;
        }
}
    