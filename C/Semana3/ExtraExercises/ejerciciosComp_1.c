#include <stdio.h>
#include <conio.h>

main()
{
    int a = 5, b = 3, c = 10, d = 55;
    c = a + b * b - 6; //8
    d = c - 10 % 4 * 3 / 6; //
    b = b * d + c;
    b = 15;
    printf("%d\n%d\n%d\n%d\n", a, b, c, d);
    //5 15 8 
    getch();
    
    return 0;  
}
