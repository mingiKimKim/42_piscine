/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:07:51 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/23 19:19:53 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	down_string(char *str);
int		special(char c);

char	*ft_strcapitalize(char *str)
{	
	int	index;

	index = 1;
	down_string(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (*(str + index))
	{	
		if ((special(str[index - 1]) == 0) && (special(str[index]) == 2))
		{
			*(str + index) = *(str + index) - 32;
		}
		else if ((special(str[index - 1]) == 3) && (special(str[index]) == 2))
		{	
			*(str + index) = *(str + index);
		}
		++index;
	}
	return (str);
}

void	down_string(char *str)
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
}

int	special(char c)
{	
	int	result;

	result = 0;
	if ((c >= 'a') && (c <= 'z'))
		return (2);
	else if ((c >= 'A') && (c <= 'Z'))
		return (2);
	else if ((c >= '0') && (c <= '9'))
		return (3);
	return (result);
}
