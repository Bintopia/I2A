#include <stdio.h>

#include "../common/shared.h"

int main()
{
    int array[] = {
        6,
        7,
        99,
        88,
        77,
        67,
    };
    int array_size = (sizeof array) / (sizeof array[0]);

    for (int i = 1; i < array_size; i++)
    {
        int swap_key = array[i];
        int pre = i - 1;

        while (pre >= 0, array[pre] > swap_key)
        {
            array[pre + 1] = array[pre];
            pre -= 1;
        }
        array[pre + 1] = swap_key;
    }

    display(array_size, array);

    return 0;
}
