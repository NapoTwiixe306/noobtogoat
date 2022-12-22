/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julien Milants <julien.milants@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 20:43:24 by Julien Mila       #+#    #+#             */
/*   Updated: 2022/12/22 20:44:43 by Julien Mila      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
            str[i] -= 32;
        i++;
    }
    return (str);
}