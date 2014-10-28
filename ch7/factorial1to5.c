#include<stdio.h>
int main()
{
	float fac(float n);
	float i;
	for(i=1;i<=20;i++)
		printf("%.f!=%.f\n",i,fac(i));
	return 0;
}
float fac(float n)
{
	static float f = 1;
	f = f * n;
	return(f);
}
