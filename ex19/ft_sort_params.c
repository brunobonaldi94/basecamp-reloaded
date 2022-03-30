/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_sort_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 23:21:08 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/03/26 20:57:52 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_swap_string(char *argv[], int index)
{
	char	*swap;

	swap = argv[index];
	argv[index] = argv[index + 1];
	argv[index + 1] = swap;
}

int	main(int argc, char *argv[])
{
	int	index;

	if (argc <= 1)
		return (0);
	index = 1;
	while (index < argc - 1)
	{
		if (ft_strcmp(argv[index], argv[index + 1]) > 0)
		{
			ft_swap_string(argv, index);
			index = 0;
		}
		index++;
	}
	index = 1;
	while (index < argc)
	{
		ft_putstr(argv[index]);
		ft_putchar('\n');
		index++;
	}
	return (0);
}
