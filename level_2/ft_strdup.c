#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    int len = 0;
    char *res;

    while (src[len])
        len++;
    len--;
    res = (char *)malloc(sizeof(char) * (len + 1));
    if (!res)
        return (NULL);
    while (src[i])
    {
        res[i] = src[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}