NAME =		diamondtrap

FLAGS =		-Wall -Werror -Wextra -Wno-shadow
ALL_INC =	-I includes

CFILE =		main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			DiamondTrap.cpp \


OFILE =		$(CFILE:.cpp=.o)

all: $(NAME)

$(NAME): $(OFILE)
		clang++ -std=c++98 $(FLAGS) $(OFILE) -o $(NAME)

%.o : %.cpp
		clang++ -std=c++98 $(FLAGS) $(ALL_INC) -c $< -o $@

clean:
		@/bin/rm -f $(OFILE)
		@echo Cleaned $(NAME) object files

fclean: clean
		@/bin/rm -f $(NAME)
		@echo Cleaned $(NAME)

re: fclean all

.PHONY: all clean flcean re
