#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 5

int a[BUFFER_SIZE];
int count = 0;
int next = 0;

void insert(int value)
{
    a[next] = value;

    next = (next + 1) % BUFFER_SIZE;

    if(count < BUFFER_SIZE)
        count++;
}

void display()
{
    int i;
    int start;

    start = (next - count + BUFFER_SIZE) % BUFFER_SIZE;

    printf("Stored samples: ");

    for(i = 0; i < count; i++)
        printf("%d ", a[(start + i) % BUFFER_SIZE]);
}

int main()
{
    int value, i;

    for(i = 0; i < 7; i++)
    {
        printf("Enter sensor value: ");
        scanf("%d", &value);

        insert(value);
    }

    display();

    return 0;
}
