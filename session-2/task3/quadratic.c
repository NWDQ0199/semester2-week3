
/*
 * Compute the roots of quadratic equation.
 * We will assume that 2 real roots exist at this point.
 * The equation is specified with 3 real constants a,b,c
 *    a.x^2 + b.x + c = 0
 */

#include <stdio.h>
#include <math.h>

int main( void )
{

    float a = 1.0;
    float b = -5.0;
    float c = 6.0;
    float root1, root2;

    /*
     * Implement the formula for the 2 roots of a quadratic.
     * You can define additional variable for intermediate results to make the code simpler.
     * Print out the final results for the 2 roots as float values.
     */
    float disc=b*b-4*a*c;
    if(disc<0)
    {
        printf("No real roots");
        return 0;
    }
    float sqrtDisc=sqrt(disc);
    float sqrtDisc2=sqrtDisc/(2.f*a);
    float mBO2A=-b/(2.f*a);
    root1=mBO2A-sqrtDisc2;
    root2=mBO2A+sqrtDisc2;
    printf("Root 1: %f\nRoot 2: %f\n",root1,root2);
    return 0;
}
