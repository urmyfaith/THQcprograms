#include<stdio.h>

int main()
{
	int max(int,int);
	int min(int,int);

	int (*p)(int, int);
	int int_number_a,int_number_b,choice,c;

	printf("enter two numbers then find the max or min.\n");
	printf("please input a,b\n");
	scanf("%d,%d",&int_number_a,&int_number_b);
	printf("please choose 1(max)or 2(min):\n");
	scanf("%d",&choice);

	if(choice==1)
		p = max;
	else
		if(choice==2)
			p = min;
	c = (*p)(int_number_a,int_number_b);
	printf("a=%d,b=%d\n",int_number_a,int_number_b);
	if(choice==1) 
		printf("max=%d\n",c);
	else
		printf("min=%d\n",c);
}

int max(int x,int y)
{
	int z;
	if(x>y)
		z=x;
	else
		z=y;
	return(z);
}

int min(int x,int y)
{
	int z;
	if(x<y)
		z=x;
	else
		z=y;
	return(z);
}
