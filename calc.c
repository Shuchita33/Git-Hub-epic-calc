#include<stdio.h>
int main()
{
int a,b,op,c;
printf("Enter two number\n");
scanf("%d%d",&a,&b);

printf("Enter the operator");
scanf("%d",&op);

switch(op)
{
case '+':
	{
		c=a+b;
		break;
	}
default:
	{
		printf("Exit");
		break;
	}
}
}