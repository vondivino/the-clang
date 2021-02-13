#include <stdio.h>

/* Print the celsius equivalent
    of the given farenheit. 
    
    e.g. 
    0F -> -17C */

main() {
    // Initialize a variable
    int fahr, cels;
    int lower, upper, step;

    // Farenheit starts at 0 and ends at 300
    lower = 0;
    upper = 300;
    step = 20;

    // Loop from 0 to 300
    fahr = lower;
    while(fahr <= upper) 
    {
        // Converts fahr to cels
        cels = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, cels);
        fahr = fahr + step;
    }
}