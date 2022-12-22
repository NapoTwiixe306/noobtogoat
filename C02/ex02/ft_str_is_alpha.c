/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julien Milants <julien.milants@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:06:03 by Julien Mila       #+#    #+#             */
/*   Updated: 2022/12/22 20:29:04 by Julien Mila      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str)
{
    int i;

    i = -1;
    if (str[0] == '\0')
        return (0);
    while (str[++i])
    {
        if ((str[i] < 'A' && str[i] > 'Z') || (str[i] > 'z' && str[i] < 'a'))
            return (1);
    }
    return (0);
}