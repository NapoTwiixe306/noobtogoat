/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julien Milants <julien.milants@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:38:31 by Julien Mila       #+#    #+#             */
/*   Updated: 2022/12/22 14:50:30 by Julien Mila      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

// int main()
// {
//     char dest[50];
//     char dest1[50];

//     printf("mine: [%s]\n", ft_strcpy(dest, "Chaussure"));
//     printf("Craft: [%s]\n", strcpy(dest1, "Chaussure"));
// }
