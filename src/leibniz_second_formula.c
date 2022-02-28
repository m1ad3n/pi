#include <stdio.h>
#include <math.h>

void leibniz_formula()
{
    // local variables
    unsigned long int i, n;
    double sum = 0, term, PI;

    printf("Number of terms: ");
    scanf("%ld", &n);

    // Applying Formula
    for(i = 0; i < n; ++i)
    {
        term = pow(-1, i) / (2 * i + 1);
        sum += term;
    }
    PI = 4 * sum;

    // print out the pi (replace 10 with wanted number of decimals)
    printf("PI: %.10lf\n", PI);
}