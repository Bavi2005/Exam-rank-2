#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *arr;
    int i = 0;
    int size;

    if (end > start)
        size = end - start;
    else
        size = start - end;
    
    arr = (int *)malloc(sizeof(int) * (size + 1));
    if (!arr)
        return (NULL);
    if (end > start)
    {
        while (start <= end)
        {
            arr[i] = start;
            i++;
            start++;
        }
    }
    else
    {
        while (start >= end)
        {
            arr[i] = start;
            i++;
            start--;
        }

    }
    return (arr);
}