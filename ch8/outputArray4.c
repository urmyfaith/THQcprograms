#include<stdio.h>

int main()
{
	int a[10];
	int * p,i;
	printf("please enter 10 intger numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(p=a;p<(a+10);p++)
	{
		printf("%5d",*p);
		printf("%15d\n",p);
	}
	printf("\n");
}
