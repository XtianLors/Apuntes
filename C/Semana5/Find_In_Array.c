#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define p printf
#define s scanf
main()
{
  int lista[MAX];
  int n, buscar, borrar, i, b;
  
  do
  {
    p("Numero de elementos a almacenar ");
    s("%d", &n);
  }while(n<0 || n>MAX);
  
  for(i=0; i<n; i++)
  {
    p("elemento ");
    s("%d", &lista[i]);
  }
  
  p("\n\n");
  
  for(i=0; i<n; i++)
    p(" %d ", lista[i]);
    
  /* búsqueda */
  i=0; b=0;
  p("\n numero a buscar ");
  s("%d",&buscar);
  
  while(i<n&&b==0)
  {
    if(buscar==lista[i])
      b=1;
    else
      i++;
  }
  
  if(b==1)
    p("elemento encontrado en %d \n",i);
  else
    p("elemento no encontrado\n");
    
  //borrar, se busca el elemento y se escribe el último elemento en su
  //lugar, disminuir n
  /* búsqueda del número a borrar */
  i=0; b=0;
  p("\n numero a borrar ");
  s("%d",&buscar);
  while(i<n&&b==0)
  {
    if(buscar==lista[i])
      b=1;
    else
      i++;
  }
  
  if(b == 1)
  {
    lista[i] = lista[n–1];
    n ––;
  }
  p("\n\n");
  
  for(i=0;i<n;i++)
    p(" %d ",lista[i]);
    
  /*insertar al final */
  p("\n numero a insertar ");
  s("%d",&buscar);
  lista[n]=buscar;
  n++;
  p("\n\n");
  
  for(i=0; i<n; i++)
    p(" %d ", lista[i]);
    
  //system("PAUSE");
  return 0;
}
