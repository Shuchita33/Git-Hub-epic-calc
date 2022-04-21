#include<stdio.h>
int main()
{
int a,b,c;
int op;
printf("Enter two number\n");
scanf("%d%d",&a,&b);

printf("Enter the operator");
scanf("%c",&op);

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
