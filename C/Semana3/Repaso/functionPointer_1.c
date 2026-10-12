#include <stdio.h>

void fun(int a)
{
     printf("Value of a is: %d\n", a);
     
}
     
int main()
{
 //Declaring a variable of type void
 void (*fun_ptr)(int) = &fun;
 
 /*
 void (*fun_ptr)(int);
 fun_ptr = &fun;
 */
 
 //
 (*fun_ptr)(10);
 getchar();
 return 0;    
}
