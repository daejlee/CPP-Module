
NAME = megaphone

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

INCLUDE = -I./include

SRCS = main.cpp

OBJS = $(SRCS:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re :
	$(MAKE) fclean
	$(MAKE) all
