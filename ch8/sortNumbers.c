#include<stdio.h>

int main()
{
	void sort(int x[],int n);
	
	int i,*p,a[5];
	p = a;
	printf("input 5 numbers:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",p++);
	}
	p=a;

	sort(p,5);
	for(p=a,i=0;i<5;i++)
	{
		printf("%5d",*p);
		p++;
	}
	printf("\n");
	return 0;
}

void sort(int x[],int n)
{
	int i,j,k,t;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(x[j]>x[k])
				k=j;
			if(k!=i)
			{
				t=x[i];
				x[i]=x[k];
				x[k]=t;
			}
		}
	}
	return;
}
