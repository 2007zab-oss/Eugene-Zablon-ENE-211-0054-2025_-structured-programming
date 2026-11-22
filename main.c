#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100], n, i, sum = 0;

    printf("Input the number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &a[i]);

        sum = sum + a[i];
    }

    printf("Sum of all elements stored in the array is: %d", sum);


    return 0;
}
