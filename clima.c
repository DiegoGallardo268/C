#include <stdio.h>
main()
{
    printf("weather chart\n");
    printf("\n");
    int fahr, celsius;
    int lower, upper, step;
    
    lower = -25;
    upper = 500;
    step  = 50;
    
    fahr = lower;
    while (fahr <= upper) {
        celsius = 10 * (fahr - 10) / 20;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
