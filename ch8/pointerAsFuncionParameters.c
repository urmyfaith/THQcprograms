#include<stdio.h>

int main()
{
	void swap(int * p1,int * p2);
	int a,b;
	int * pointer1,* pointer2;
	printf("please enter two number:a , b:\n");
	scanf("%d,%d",&a,&b);
	pointer1 = &a;
	pointer2 = &b;
	if(a<b)
		swap(pointer1,pointer2);
	printf("max=%d,min=%d\n",a,b);
	return 0;
} 
void swap(int * p1,int * p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
