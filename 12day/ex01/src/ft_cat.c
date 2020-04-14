/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 16:03:27 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/12 18:07:26 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int		ft_strlen(char *str)
{
	int	files_count;

	files_count = 0;
	while (str[files_count])
		files_count++;
	return (files_count);
}

void	ft_print_error(int err)
{
	if (err == 21)
		write(2, ": Is a directory\n", 17);
	else if (err == 13)
		write(2, ": Permission denied\n", 20);
	else
		write(2, ": No such file or directory\n", 28);
}

void	ft_display(int count, char *files[])
{
	int		fl;
	char	buffer[29696];
	int		i;
	int		bytes;
	char	*filename;

	i = 0;
	while (++i <= count)
	{
		filename = files[i];
		fl = open(filename, O_RDWR);
		if (fl < 0)
		{
			write(2, "cat: ", 5);
			write(2, filename, ft_strlen(filename));
			ft_print_error(errno);
			continue;
		}
		while ((bytes = read(fl, &buffer, 29696)))
			write(1, &buffer, bytes);
		close(fl);
	}
}

void	ft_write_copy(void)
{
	char c;

	while (read(1, &c, 1) > 0)
		write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		ft_write_copy();
	else
		ft_display(argc - 1, argv);
	return (0);
}
