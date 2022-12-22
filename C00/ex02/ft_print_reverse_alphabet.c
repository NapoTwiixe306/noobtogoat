#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    write(1, "zyxwvutsrqpomnlkjihgfedcba", 26);
    write(1, "\n", 1);
}