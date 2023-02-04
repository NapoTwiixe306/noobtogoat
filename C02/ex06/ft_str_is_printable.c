/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julien Milants <julien.milants@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:01:42 by Julien Mila       #+#    #+#             */
/*   Updated: 2023/02/04 14:02:19 by Julien Mila      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	nb;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 127))
			nb = 1;
		else
			return (0);
		i++;
	}
	nb = 1;
	return (nb);
}