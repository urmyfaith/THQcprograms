#include<stdio.h>

int main()
{
	int a = 100,b = 10;
	int * pointer1,* pointer2;
	pointer1 = &a;
	pointer2 = &b;
	printf("a=%d,b=%d\n",a,b);
	printf("*pointer1=%d,*pointer2=%d\n",* pointer1,* pointer2);

	printf("pointer1=%d,pointer2=%d\n",pointer1,pointer2);
	return 0;
}
