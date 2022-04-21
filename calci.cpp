#include<iostream>
#include<cmath>
int main()
{
	int n,a,b;
	cin>>n;
	cout<<"enter your numbers";
	cin>>a>>b;
	switch(n)
	{
		case 1:
		cout<<a+b;
		break;
		case 2:
		cout<<abs(a-b);
		break;
		case 3:
		cout<<a*b;
		break;
		case 4:
		cout<<a/b;
		break;
	}
	return 0;
}