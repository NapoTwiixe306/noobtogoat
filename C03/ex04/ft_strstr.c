/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julien Milants <julien.milants@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:53:58 by Julien Mila       #+#    #+#             */
/*   Updated: 2023/01/26 14:53:59 by Julien Mila      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[c] != '\0')
	{
		while (str[c + i] == to_find[i] && str[c + i] != '\0')
			i++;
		if (to_find[i] == '\0')
			return (str + c);
		c++;
		i = 0;
	}
	return (0);
}