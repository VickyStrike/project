#include "libft.h"

int     main(void)
{
    char    tab[] = "tate titi toto";
    char    tab_2[] = "tata titi toto";

    if (ft_strequ(tab, tab_2))
    {
        printf("Chaines equales.\n");
    }
    else
        printf("Chaines differentes.\n");

    return (0);
}
