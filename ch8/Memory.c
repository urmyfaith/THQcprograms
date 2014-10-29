#include<stdio.h>

int main()
{
	short int a=1;
	int b=2;
	long int c=3;
	float d=1.1;
	double e=2.2;
	char f='f';
	
	printf("short int:\t%d\n",sizeof(a));
	printf("int:\t%d\n",sizeof(b));
	printf("long int:\t%d\n",sizeof(c));
	printf("float:\t%d\n",sizeof(d));
	printf("double:\t%d\n",sizeof(e));
	printf("char:\t%d\n",sizeof(f));

	return 0;
}

