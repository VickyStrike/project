#include "libft.h"

int         main(void)
{
    char    s[] = "Té&o'(èçttyh78/6314qolid*L Azd    h4586azdA";
    int     i;

    i = 0;
    while (s[i])
    {
        printf("%c", ft_tolower(s[i]));
        i++;
    }
    printf("\n");

    i = 0;
    while (s[i])
    {
        printf("%c", tolower(s[i]));
        i++;
    }

    printf("\n");
    return (0);
}
