#include<iostream>
using namespace std;
int main()
{float a,b,ch;
    cout<<"enter 2 numbers";
    cin>>a>>b;
    cout<<"Enter \n 1 to add \n 2 to subtract \n 3 to multiply \n 4 to divide "<<endl;
    cin>>ch;
    if(ch==1){cout<<"Sum is"<<a+b;}
    if(ch==2){cout<<"Difference is"<<a-b<<endl;}
    if(ch==3){cout<<"Product is "<<a*b;}
    if(ch==4){cout<<"Result is "<<a/b;}
    else{cout<<"enter right input";}
    return 0;
}