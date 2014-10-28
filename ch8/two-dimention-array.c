#include<stdio.h>
int main()
{
	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
	printf("address:a[0][0]\n");
	printf("%d,%d\n",a,*a);
	printf("%d,%d\n",a[0],*(a+0));
	printf("%d,%d\n",&a[0],&a[0][0]);

	printf("address:a[1][0]\n");
	printf("%d,%d\n",a[1],a+1);
	printf("%d,%d\n",&a[1][0],*(a+1)+0);

	
	printf("address:a[2][0]\n");
	printf("%d,%d\n",a[2],*(a+2));
	printf("%d,%d\n",&a[2],a+2);


	printf("value of a[1][0]\n");
	printf("%d,%d\n",a[1][0],*(*(a+1)+0));


	printf("value of a[2][0]\n");
	printf("%d,%d\n",*a[2],*(*(a+2)+0));


}
