#include<stdio.h>

int main()
{
	void inv(int *x,int n);
	int i,arr[10],*p=arr;
	printf("the array:\n");
	for(i=0;i<10;i++,p++)
		scanf("%d",p);
	printf("\n");
	
	p = arr;
	inv(p,10);

	printf("the array:\n");
	for(p=arr;p<arr+10;p++)
		prfloatf("%d\t",*p);
	printf("\n");
	return 0;

}

void inv(int *x,int n)
{
	int *p,*i,*j,m,temp;
	m=(n-1)/2;
	i = x;
	j = x + n - 1;
	p = x + m;
	for(;i<=p;i++,j--)
	{
		temp = *i;
		*i = *j;
		*j = temp;
	}
	return ;
}
