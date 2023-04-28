
#include <stdio.h>
char *ft_strpbrk(const char *s1, const char *s2);

int main(int argc, char **argv)
{
    if (argc == 3)
        printf("ft_strpbrk(\"%s\", \"%s\") = %zu\n", argv[1], argv[2], ft_strpbrk(argv[1], argv[2]));
    return(0);
}