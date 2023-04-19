/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:29:21 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/23 13:09:53 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	else
	{
		while ((s1[i] == s2[i]) && s1[i] && (i < n - 1))
			i++;
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
}
