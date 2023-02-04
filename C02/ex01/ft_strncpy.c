/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julien Milants <julien.milants@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:05:37 by Julien Mila       #+#    #+#             */
/*   Updated: 2023/02/02 12:09:27 by Julien Mila      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (src[i] != '\0' && i < 0)
    {
        *(dest + i) = *(src + i);
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return(dest);
       
}