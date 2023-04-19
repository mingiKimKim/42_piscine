/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:45:13 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/18 15:01:40 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{	
	int	index;

	index = 0;
	while (*(src + index) != '\0')
	{	
		*(dest + index) = *(src + index);
		++index;
	}
		*(dest + index) = '\0';
	return (dest);
}
