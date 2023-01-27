/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julien Milants <julien.milants@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:59:35 by Julien Mila       #+#    #+#             */
/*   Updated: 2023/01/27 13:12:09 by Julien Mila      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		comp;
	int		resultat;

	i = 0;
	comp = 1;
	resultat = 0;
	while ((str[i] == ' ') || (str[i] == '\r') || (str[i] == '\t')
		|| (str[i] == '\n' || (str[i] == '\v') || (str[i] == '\f')))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			comp *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = (str[i] - '0') + (resultat * 10);
		i++;
	}
	return (resultat * comp);
}