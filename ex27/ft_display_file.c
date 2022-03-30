/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 21:27:32 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/03/25 21:27:56 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	char	*file_name;
	char	file_content;
	int		fd;

	if (argc <= 1)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	else if (argc >= 3)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	file_name = argv[1];
	fd = open(file_name, O_RDONLY);
	while (read(fd, &file_content, 1) != 0)
		write(1, &file_content, 1);
	close(fd);
	return (0);
}
