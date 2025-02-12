
#include "push_swap.h"
#include <linux/limits.h>




t_listutil *algo_sort(t_listutil *listutil)
{
    int i;
    t_element *firsta;
    int j;
    int size;

    size = listutil->sizea;
    i = 0;
    //inclure appelle de algo_sort_5
    while (i < listutil->max_lenght)
    {
        j = 0;
        while(j++ < size)
        {
            firsta = listutil->taila;
            if (((firsta->value->fake_value >> i) & 1) == 1)
                listutil = manip_ra(listutil);
			else
				listutil = manip_pb(listutil);
        }
        while (listutil->sizeb != 0)
            listutil = manip_pa(listutil);
        i++;
    }
    return (listutil);
}


t_listutil *algo_sort_5(t_listutil *listutil)
{
    int i;
    int j;
    int size;
    t_element *firsta;
    t_element *temp;

    size = listutil->sizea;

    // i = 0;
    // firsta = listutil->taila;
    // while(i < size + 1)
    // {
    //     j = 0;
    //     while(j < size - i - 1)
    //     {
    //         // Convert strings to integers for comparison
    //         if (firsta->value->fake_value > firsta->prev->value->fake_value)
    //         {
    //             // Swap the strings
    //             temp = liste[j];
    //             liste[j] = liste[j + 1];
    //             liste[j + 1] = temp;
    //         }
    //         j++;
    //     }
    //     i++;
    // }
    // ca c'est null
    return (listutil);
}
