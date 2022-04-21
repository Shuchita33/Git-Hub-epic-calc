#include<iostream>
using namespace std;
int main(){
    int answer,num1,num2;
    char operation;
    cin>>num1>>operation>>num2;
    switch (operation)
    {
    case '+': answer=num1+num2;
        break;
    case '-': answer=num1-num2;
        break;
    case '/': answer=num1/num2;
        break;
    case '*': answer=num1*num2;
        break;
    
    default: cout<<"SYNTAX ERROR";
        break;
    }
    cout<<answer<<endl;
    return 0;

}