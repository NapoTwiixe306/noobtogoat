/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julien Milants <julien.milants@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 12:01:46 by Julien Mila       #+#    #+#             */
/*   Updated: 2023/02/05 12:07:03 by Julien Mila      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    while (j < nb && src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return(dest);
}

#include <stdio.h>
int main()
{
    char src[] = "Belgique";
    char dest[] = "19";
    printf("%s", ft_strncat(dest, src, 99));
}