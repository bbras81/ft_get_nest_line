# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/04 13:11:12 by brunmigu          #+#    #+#              #
#    Updated: 2025/05/04 13:17:40 by brunmigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = get_next_line.a
COMPILER = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -g
INCLUDE = -I.
AR = ar rcs

SRCS = 

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(OBJS) %.o: %.c
	$(COMPILER) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS) $(LIBFT)
	$(AR) $(NAME) $(OBJS) $(LIBFT)

$(LIBFT): $(LIBFTDIR)
	$(MAKE) -C $(LIBFTDIR)

clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C $(LIBFTDIR)

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIBFTDIR)

re: fclean all

.PHONY: all clean fclean re deps
