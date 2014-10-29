#include<stdio.h>
int main()
{
    float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
    float *search(float (*p)[4]);
    
    float *rowPointer;
    int i,j;
    
    for(i=0;i<3;i++)
    {
        rowPointer = search(score+i);
        if(rowPointer == *(score + i ))
        {
            printf("No.%d score:\t",i);
            for(j=0;j<4;j++)
            {
                printf("%5.2f\t",*(rowPointer+j));
            }
        }
        printf("\n");
    }
    
}

float * search(float (*p)[4])
{
    float *pt;
    int k;
    pt = NULL;
    for(k=0;k<4;k++)
    {
        if(*(*p+k) < 60)
            pt = *p;
    }
    return(pt);
}
