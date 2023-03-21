#include<iostream>
using namespace std;
int main(){
    float c,f;
    cout<<"enter temp in F ";
    cin>>f;
    
//°C = [(°F-32)×5]/9.
    c=((f-32)*5)/9;
    cout<<"C  ="<<c;

}