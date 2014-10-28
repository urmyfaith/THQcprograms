#include<stdio.h>
int main()
{
	int a[10];
	int i;
	printf("please enter 10 integer number:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
		//printf("%5d",a[i]);
		printf("%5d",*(a+i));
	return 0;
}
