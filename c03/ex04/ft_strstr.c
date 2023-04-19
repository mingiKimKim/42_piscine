/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 06:26:35 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/24 22:52:13 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{	
	int	i;
	int	result;

	if (!to_find[0])
		return (str);
	while (*str)
	{	
		if (*str == *to_find)
		{	
			i = 0;
			result = 0;
			while (to_find[i])
			{	
				if (str[i] != to_find[i])
					result = 1;
				i++;
			}
			if (result == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
