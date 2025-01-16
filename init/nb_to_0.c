#include "push_swap.h"
// #include <stdio.h>
// #include <stdlib.h>

static char *remove_negative_sign(char *str)
{
    if (str[0] == '-')
        return ft_strdup(str + 1);
    else
        return ft_strdup(str);
}


char *nb_to_0(char *nb)
{
    char *str;
    int len;
    size_t si;

    nb = remove_negative_sign(nb);
    len = ft_strlen(nb);
    str = (char *)malloc(sizeof(char) * (10 + 1));
    if (!str)
        return NULL;
    si = 10;
    str[si--] = '\0';
    while (len > 0)
    {
        str[si--] = nb[--len];
    }
    while (si != (size_t)-1)
        str[si--] = '0';
    return str;
}

// int main()
// {
//     char *ok = nb_to_0("3647");
//     printf("ok : %s\n", ok);
//     free(ok);
//     return 0;
// }

