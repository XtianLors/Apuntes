#include <stdio.h>
#include <stdlib.h>
//#include <conio2.h>
#define MAX 100
#define p printf
#define s scanf

int n= -1;
 
void llenar(int l[])
{
 int i;
 do
 {
 p("Número de elementos a almacenar: ");
 s("%d", &n)
     
 }while(n<0||n > MAX);
 
 for(i=0; i<n;i++)
 {
  p("elemento");         
  s("%d", &l[i]);
 }
}
    
int main()
{
    void llenar(int 1[]);
    int lista[MAX];
    
    llenar(lista);
    
}


 
