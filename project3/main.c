#include <stdio.h>
#include <math.h>

int main()
{
    double num1,num2;

    printf ("Enter first number:");
    scanf ("%lf",&num1);
    printf ("Enter second number:");
    scanf ("%lf",&num2);
    printf ("%.2lf addition\n",num1+num2);
    printf ("%.2lf subtraction\n",num1-num2);
    printf ("%.2lf multiplication\n",num1*num2);
    printf ("%.2lf division\n",num1/num2);
    printf ("%.2lf modulus\n",fmod(num1,num2));




    return 0;
}
