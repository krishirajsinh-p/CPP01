# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 22:24:56 by kpuwar            #+#    #+#              #
#    Updated: 2023/10/27 02:46:05 by kpuwar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brain

CC = c++
CFLAGS = -Wextra -Wall -Werror -std=c++98

SRCS = main.cpp
OBJS = ${SRCS:.cpp=.o}

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re