/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 01:13:48 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/03/29 04:10:55 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (tab[index])
	{
		if (f(tab[index]) == 1)
			count++;
		index++;
	}
	return (count);
}
