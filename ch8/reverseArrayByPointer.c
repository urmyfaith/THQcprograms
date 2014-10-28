#include<stdio.h>

int main()
{
	void inv(int * x,int n);
	int i,a[10]={3,7,9,11,0,6,7,5,4,2};
	printf("The original array:\n");
	for(i=0;i<10;i++)
		printf("%5d",a[i]);
	printf("\n");

	printf("abc");

	inv(a,10);
	printf("the reveredArray is :\n");

	for(i=0;i<10;i++)
		printf("%5d",a[i]);
	printf("\n");
	return 0;

}

void inv(int * x,int n)
{
	int *p,*i,*j,temp,m=(n-1)/2;

	i = x;
	j = x + n -1;
	p = x + m;
	for(;i<=p;j--,i++)
	{
		temp = *i;
		*i = *j;
		*j = temp;
	}
	return ;
}
