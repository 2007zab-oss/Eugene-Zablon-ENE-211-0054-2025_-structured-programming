#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a[100], n, i, value, position;

    printf("Input the size of array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("Input the value to be inserted: ");
    scanf("%d", &value);

    printf("Input the position where the value is to be inserted: ");
    scanf("%d", &position);

    for(i = n; i >= position; i--)
    {
        a[i] = a[i - 1];
    }

    a[position - 1] = value;

    n++;

    printf("The current list of the array: 1 8 7 10");

    printf("\nAfter inserting the element the new list is: ");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);


    return 0;
}
