/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julien Milants <julien.milants@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 10:39:00 by Julien Mila       #+#    #+#             */
/*   Updated: 2023/02/01 10:39:46 by Julien Mila      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*(str + i) != '\0')
        i++;
    return(i);
}