# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/12 15:53:24 by tcarlena          #+#    #+#              #
#    Updated: 2020/03/15 16:46:14 by tcarlena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
SRC = src/*.c
HEADER = includes

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror $(SRC) -o $(NAME) -I $(HEADER)

clean:
		/bin/rm -f *.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
