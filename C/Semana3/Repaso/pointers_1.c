/*------------------------------------------------*/
/*  Program chapter6_3                            */
/*                                                */
/*  This program demonstrate the relationship     */
/*  between variables and addresses.              */
/*                                                */
/*
  Name: 
  Copyright: 
  Author: 
  Date: 09/08/23 18:31
  Description: 
*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    
  int a, b, *ptr, *newptr, *n_ptr; // declares pointer reads as "bridge to address..."
  a = 4;
  newptr = &a;
  n_ptr = &newptr;
  //*newptr = &a; /*This statement is not valid.*/
  printf("This pointer is newprt: %u, %d, %d\n", &newptr, newptr, *newptr);
  printf("This pointer is n_prt: %u, %d, %d\n", &n_ptr, n_ptr, *n_ptr);
  ptr = &a; // & reads as "the address to..."
  
  b = *ptr; //If you see the * symbol then "It probably has an address."
  // Also read as b equals to "bridg to address"
  
  printf("The value of a is ");
  printf("%d\n", a);
  printf("The address of a is %u\n", &a);
  printf("The value of b is ");
  printf("%d\n", b);
  printf("The address of b is %u\n", &b);
  printf("The value of *ptr is %u\n", *ptr);
  printf("The address of ptr is %u\n", &ptr);
  printf("The value of ptr is %d\n", ptr);
  
  printf("How to read &ptr %u", &ptr);
  printf(". With percent u.\n");
  printf("How to read &ptr %d", &ptr);
  printf(". With percent d.\n");
  
  printf("How to read *ptr %u", *ptr);
  printf(". With percent u.\n");
  printf("How to read *ptr %d", *ptr);
  printf(". With percent d.\n");
  
  printf("How to read *&ptr %u", *&ptr);
  printf(". With percent u.\n");
  printf("How to read *&ptr %d", *&ptr);
  printf(". With percent d.\n");
  
  printf("How to read &*ptr %u", &*ptr);
  printf(". With percent u.\n");
  printf("How to read &*ptr %d", &*ptr);
  printf(". With percent d.\n");
  
  //a, b, *ptr = &a;

  //b = *ptr

  getch();

  return EXIT_SUCCESS;
}
