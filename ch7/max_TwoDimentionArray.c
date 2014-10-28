#include<stdio.h>
int main()
{
	int max_value(int array[][4]);
	int a[3][4]={{1,3,5,7},{2,4,6,8},{15,17,34,12}};
	printf("array is :\n");
	printf("max value of two dimention array is %d\n",max_value(a));
	return 0;
}

int max_value(int array[][4])
{
	int i,j,max;
	max = array[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%5d",array[i][j]);
			if(array[i][j]>max) 
				max = array[i][j];
		}
		printf("\n");
	}
	return(max);
}
