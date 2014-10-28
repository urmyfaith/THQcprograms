#include<stdio.h>

int main()
{
	float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
	float * search(float (*p)[4],int n);

	float *p;
	int i,k;
	printf("enter the number of students:");
	scanf("%d",&k);
	if(k>2)
	{
		printf("please input nuber 0 or 1 or 2.\n");
		return 0;
	}
	printf("The scores of No.%d are :\n",k);
	p = search(score,k);
	for(i=0;i<4;i++)
		printf("%5.2f\t",*(p+i));
	printf("\n");
	return 0;
}
float *search(float (*rowPointer)[4],int n)
{
	float *pt;
	//pt = *rowPointer + n ;  //pt = &score[0][k]
	pt = *(rowPointer+n);  //pt = &score[k][0]
	return(pt);
}
