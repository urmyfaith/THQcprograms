#include<stdio.h>

int main()
{
	float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
	float * search(float (*p)[4]);

	float *p; //rowPointer;
	int i,j;
	for(i=0;i<3;i++)
	{
		p = search(score+i);
		if(p==*(score+i))
		{
			printf("No.%d scroe:\t",i);
			for(j=0;j<4;j++)
			{
				printf("%5.2f\t",*(p+j));
			}
			printf("\n");
		}
	}
	return 0;
}
float *search(float (*rowPointer)[4])
{
	int i = 0;
	float * pt;
	pt = NULL;
	for(;i<4;i++)
	{
		if(*(*rowPointer + i) < 60) 
			pt = * rowPointer ; //get addresss score[i][0]
	}
	return (pt);
}

