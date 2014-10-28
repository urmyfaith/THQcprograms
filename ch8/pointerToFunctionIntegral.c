//
//  main.c
//  integral
//
//  Created by zx on 10/28/14.
//  Copyright (c) 2014 zx. All rights reserved.
//


#include<stdio.h>
#include<math.h>

int main()
{
    float integral(float low_limit,float upper_limit, float (*p)(float x));
    float func1(float x);
    float func2(float x);
    
    float low_limit,upper_limit,result;
	int choice;
    printf("integral wich funciotn f(x)|(low_limit,upper_limit)\n");
    printf("input low_limit and upper_limit:\n");
    scanf("%f,%f",&low_limit,&upper_limit);
    printf("choose function f(x)\n\t1-->f(x)=2*x\n\t2-->f(x)=2*x+1\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			result=integral(low_limit,upper_limit,func1);
			break;
		case 2:
			result=integral(low_limit,upper_limit,func2);
			break;
		default:
			printf("please choice the right func.");
	}
    return 0;
}

float func1(float x)
{
    float s;
    s = 2*x ;
    return s;
}


float func2(float x)
{
    float s;
    s = 2*x + 1;
    return s;
}

float integral(float a,float b,float(*p)(float x))
{
    float x,result=0;
    float dx=0.001;
    for(x=a;x<b;)
    {
        result = result + (*p)(x) * dx;
        x = x + dx;
    }
    printf("%.f\n",result);
    return result;
}



