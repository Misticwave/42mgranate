/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:44:31 by mgranate          #+#    #+#             */
/*   Updated: 2022/02/02 19:02:34 by mgranate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	if (ac > 1)
	{
		while (j < ac)
		{
			i = 0;
			while (av[j][i] != '\0' )
			{
				write(1, &av[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
	return (0);
}
