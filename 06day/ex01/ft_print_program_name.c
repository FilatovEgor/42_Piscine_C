/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 16:17:37 by tcarlena          #+#    #+#             */
/*   Updated: 2020/03/04 16:19:42 by tcarlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc != 0)
	{
		while (argv[0][i])
			ft_putchar(argv[0][i++]);
		ft_putchar('\n');
	}
	return (0);
}
