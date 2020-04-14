# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcarlena <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/12 15:53:24 by tcarlena          #+#    #+#              #
#    Updated: 2020/03/12 15:56:18 by tcarlena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
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
