#include "libft.h"

int     main(void)
{
    char    tab[] = "tata titi toto";
    char    tab_2[] = "tat";

    if (ft_strnequ(tab, tab_2, 7))
    {
        printf("Chaines equales.\n");
    }
    else
        printf("Chaines differentes.\n");

    return (0);
}
