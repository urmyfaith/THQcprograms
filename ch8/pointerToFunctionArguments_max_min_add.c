#include<stdio.h>

int main()
{
	void result(int x,int y,int (*p)(int,int));
	int max(int,int);
	int min(int,int);
	int add(int,int);

	int a=34,b=-21,choose;
	printf("numberA=34,nubmerB=-21,choose:\n\t1(max)\n\t2(min)\n\t3(add)\n ");
	scanf("%d",&choose);

	if(choose == 1)
		result(a,b,max);
	else
		if(choose == 2)
			result(a,b,min);
		else
			if(choose == 3 )
				result(a,b,add);
	return 0;
}

void result(int x,int y,int (*p)(int,int))
{
	int result;
	result = (*p)(x,y);
	printf("%d\n",result);
}

int max(int x,int y)
{
	int z;
	z = x>y? x:y;
	return(z);
}

int min(int x,int y)
{
	int z;
	z = x<y? x:y;
	return(z);
}

int add(int x,int y)
{
	int z;
	z = x + y;
	return (z);
}
