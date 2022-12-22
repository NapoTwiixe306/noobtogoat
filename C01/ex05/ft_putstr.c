/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julien Milants <julien.milants@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:06:22 by Julien Mila       #+#    #+#             */
/*   Updated: 2022/12/22 14:21:28 by Julien Mila      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(int *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_puchar (*(str + i));
		i++;
	}
}
