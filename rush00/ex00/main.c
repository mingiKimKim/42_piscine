/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaebkim <chaebkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:40:37 by chaebkim          #+#    #+#             */
/*   Updated: 2023/01/15 20:01:29 by sojchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(int x, int y);
int		atoi(char *S);

int	main(int argc, char **argv)
{
	int		x;
	int		y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		rush(x, y);
		return (0);
	}
	else
	{
		ft_putchar('X');
	}
}

int	atoi(char *S)
{	
	int	num;
	int	i;

	num = 0;
	i = 0;
	while (S[i] && (S[i] >= '0' && S[i] <= '9'))
	{	
		num = num * 10 + (S[i] - '0');
		i++;
	}	
	return (num);
}
