#include <stdio.h>

#include "./shared.h"

void display(int array_size, int array[array_size - 1])
{
    printf("Print %d elements of array:\n", array_size);
    for (int i = 0; i < array_size; i++)
    {
        printf("[%d]:\t%3d\n", i + 1, array[i]);
    }
}
