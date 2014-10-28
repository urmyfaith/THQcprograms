#include<stdio.h>
#include<stdlib.h>

#define GET_ARRAY_LEN(array,len){len = (sizeof(array)/sizeof(array[0]));}

int main()
{
	char a[]={'1','2','3','4'};
	int len;
	GET_ARRAY_LEN(a,len);
	printf("%d\n",len);
	return 0;
}
