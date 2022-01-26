#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    int a, n, fact=1;

    printf("Enter a value for Calculating Factorial = ");
    scanf("%d",&n);


    for(a=1; a<=n; a++)
    {
        fact=fact*a;
    }


    printf("\n\t%d Factorial (%d!) = %d", n, n, fact);


    getch();
    return 0;
}
