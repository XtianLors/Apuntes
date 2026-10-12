#include <stdio.h>

void inc_count(int *count_ptr)
{
 (*count_ptr)++;    
}

int main()
{
    int count = 0;
    while(count<10)
    {
      inc_count(&count);               
    }
    printf("%d", count);
    getchar();
 return (0);   
}
//https://www.geeksforgeeks.org/null-pointer-in-c/
//https://en.wikipedia.org/wiki/Null_pointer
