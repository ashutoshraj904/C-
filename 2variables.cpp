#include<iostream>
using namespace std;
int main(){
//1.2*10^4 can be written as 1.2e4 
    int a; //stores integer
//size= 2/4 bytes
    char b; //stores characters
    //ascii value can be used too
//size=1 bite   
    float c; //stores decimal values
//size= 4 bytes   
    double d; //stores  long decimal values
//size=8 bytes    
    string e; //stores text its value are between ""    
    bool f= true; //stores true false
//size= 1 byte    

//float can have 6-7 digits after decimal while double can have 15 digits
    cout<<"enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    cout<<"enter c";
    cin>>c;
    cout<<"enter d";
    cin>>d;
    cout<<"enter e";
    cin>>e;
    cout<<" a = "<<a<<"\nb = "<<b<<"\nc= "<<c<<"\nd= "<<d<<"\ne= "<<e<<"\nf= "<<f;
}
/*const is a keyword used if u want ur variable to be unchangable 
const int PI =3.14 so if u try to put diff value  in PI later on it will show error*/
