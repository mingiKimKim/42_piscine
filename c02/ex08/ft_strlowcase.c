/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:40:45 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/19 19:54:48 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (*(str + index))
	{
		if ((*(str + index) >= 'A') && (*(str + index) <= 'Z'))
		{
			*(str + index) = *(str + index) + 32;
		}
		++index;
	}
	return (str);
}
