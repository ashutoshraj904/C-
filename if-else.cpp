#include<iostream>
using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter a b ";
//     cin>>a>>b;
//     if (a>b){
//     cout<<"A";}
//     else {cout<<"B";}
// }
// int main(){
//     int a;
//     cout<<"enter a ";
//     cin>>a;
//     if (a==0){cout<<"0";}
//     else if (a>0){cout<<"+ve";}
//     else{cout<<"-ve";}
// }
int main()//HW QUES 
{
    char ch;
    cout<<"enter a char ";
    cin>>ch;
    if(ch>=97 && ch<=122)
    {
        cout<<"a-z";
    }else if (ch>=65&&ch<=90)
    {
        cout<<"A-Z";
    }else if(ch>=48&&ch<=57)
    {
        cout<<"0-9";}
    else{
        cout<<"SYMBOLS";
    }

}