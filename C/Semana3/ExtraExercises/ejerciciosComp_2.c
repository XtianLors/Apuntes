#include <stdio.h>
#include <conio.h>
#define M 3

main()
{
 
 int a = 5, b = 8, c;
 c = 4 * a % b; // 24, 4
 c = c - M; // 24 - 3 = 21, 1
 b = a + c - M; // 5 + 21 - 3 = 23, 3
 a = b * M; // 24, 
 
 printf("%d\n%d\n%d\n", a, b, c);
 getch();
 
 return 0;     
      
}
