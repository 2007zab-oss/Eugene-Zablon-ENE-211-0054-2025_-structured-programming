#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[100], n, i;

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("The values stored in the array are: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nThe values stored in reverse are: ");
    for(i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);


    return 0;
}
