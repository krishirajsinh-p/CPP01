# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 05:41:31 by kpuwar            #+#    #+#              #
#    Updated: 2023/10/27 05:41:48 by kpuwar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = newSed

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