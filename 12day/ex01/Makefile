# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/12 18:54:24 by tcarlena          #+#    #+#              #
#    Updated: 2020/03/12 19:02:17 by tcarlena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRC = src/*.c

all: $(NAME)

$(NAME):
			gcc -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
			/bin/rm -f *.o

fclean: clean
			/bin/rm -f $(NAME)

re: fclean all
