#include <stdio.h>

void inc_count(int *count_ptr, double *move_ptr)
{
 (*count_ptr)++;
 (*move_ptr) = (*move_ptr) + .001;
}

int main()
{
    int count = 0;
    double move_ptr = 1.0012;
    while(count<10)
    {
      inc_count(&count, &move_ptr);        
    }
    printf("%d\n", count);
    printf("%lf\n", move_ptr);
    getchar();
 return (0);   
}
//https://www.geeksforgeeks.org/null-pointer-in-c/
