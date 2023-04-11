
name = FragTrap

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS = $(SRCS:%.cpp=%.o)

all : $(name)

$(name) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $^

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(name)

re :
	$(MAKE) fclean
	$(MAKE) all

.PHONY : all clean fclean re