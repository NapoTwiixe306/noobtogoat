/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julien Milants <julien.milants@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:51:39 by Julien Mila       #+#    #+#             */
/*   Updated: 2022/12/22 15:05:13 by Julien Mila      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
    return(dest);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char dest[5];
//     //char dest1[5];

//     printf("mine: [%s]\n", ft_strncpy(dest, "Chaussures", 4));
//     //printf("Craft: [%s]\n", strncpy(dest1, "Chaussures", 4));
// }