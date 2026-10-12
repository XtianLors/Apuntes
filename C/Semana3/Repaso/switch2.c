/*  between variables and addresses.              */
/*                                                */
/*
  Name: chapter6_4
  Copyright: 1995 by Prentice-Hall, Inc.
  Author: Delores M. Etter
  Date: 09/08/23 22:48
  Description: page 299; Engineering Problem Solving with ANSI C Fundamental
  Concepts; Alan R. Apt Book.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  void switch2(int *a, int *b);
  int x=10, y=5;

  printf("variable: a | value %d | position %u\n", x, &x);
  printf("variable: b | value %d | position %u\n", y, &y);

  /*  Incorrect function to switch two values. */
  switch2(&x, &y);
  printf("variable: a | value %d | position %u\n", x, &x);
  printf("variable: b | value %d | position %u\n", y, &y);
     
  getchar();
return EXIT_SUCCESS;
}

/*  ----------------------------------------- */
/*  Incorrect function to switch two values. */
void switch2(int *a, int *b)
{
      printf("The value of a is: %d\n", a);
      printf("variable: a | value %d | position %u\n", a, &a);
      printf("The value of b is: %d\n", b);
      printf("variable: b | value %d | position %u\n", b, &b);
     /*  Declare values. */
     int hold;
    
     /*  Incorrect function to switch two values. */
     hold = *a;
     printf("The value of hold is: %d\n", hold);
     printf("variable: hold | value %d | position %u\n", hold, &hold);
     *a = *b;
     printf("The value of a is: %d\n", a);
     printf("variable: a | value %d | position %u\n", a, &a);
     *b = hold;
     printf("The value of b is: %d\n", hold);
     
     printf("variable: a | value %d | position %u\n", a, &a);
     printf("variable: b | value %d | position %u\n", b, &b);
     printf("variable: hold | value %d | position %u\n", hold, &hold);
     
     
     /*  void return. */
     return;
}
/*  ----------------------------------------- */
