#include <stdio.h>
void inc_count(int *count_ptr);
void foo(int *fireW, double *fireH, float *fireN);

void inc_count(int *count_ptr)
{
 (*count_ptr)++;    
}

void foo(int *fireW, double *fireH, float *fireN)
{
     int target;
     //double newfireH;
     //float newfireN;
     printf("\nThis is amazing.\n");
     printf("Let's have some fun.\n");
     
     for(target = 0; target < 10; target ++)
     {
       (*fireW)++;
       (*fireH) = (*fireH) + (1/ ((double)target));
       (*fireN) = (*fireN) + ( ((float)target)/1000);
     }
     /*printf("The value of fireW is: %d\n", fireW);
     printf("The value of fireH is: %lf\n", newfireH);
     printf("The value of fireN is: %f\n", newfireN);
     printf("----------------------");*/
     
}

int main()
{
    int count = 0;
    double alpha = 1.1;
    float twopha = 1.2301;
    
    while(count<10)
    {
      inc_count(&count);               
    }
    printf("%d", count);
    
    foo(&count, &alpha, &twopha);
    printf("The value of alpha is: %d\n", count);
    printf("The value of alpha is: %lf\n", alpha);
    printf("The value of twopha is: %f\n", twopha);
    
    getchar();
 return (0);   
}
//https://www.geeksforgeeks.org/null-pointer-in-c/
