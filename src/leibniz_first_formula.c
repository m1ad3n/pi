#include <stdio.h>
#include <math.h>

void gregory_leibniz_formula()
{
    // local variables
    int i = 0, s = -1;
    double accuracy, denominator = 1, PI = 0, prevPI = 1000;

    printf("Accuracy: ");
    scanf("%lf", &accuracy);

    while (prevPI - PI >= accuracy || PI - prevPI >= accuracy)
    {
        // applying the formula
        prevPI = PI;
        PI = PI - s * (1 / denominator);

        denominator += 2;
        ++i;
        s = -s;
    }
    
    // increase the PI by 4 (part of the formula) and print out the PI (replace 10 with wanted number of decimals)
    PI *= 4;
    printf("PI: %.10lf\n", PI);
}