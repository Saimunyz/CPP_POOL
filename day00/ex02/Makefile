NAME =		account

FLAGS =		-Wall -Werror -Wextra
HEADER =	-I Account.hpp

CFILE =		Account.cpp \
			tests.cpp \

OFILE =		$(CFILE:.cpp=.o)

all: $(NAME)

$(NAME): $(OFILE)
		clang++ $(FLAGS) $(OFILE) -o $(NAME)

%.o : %.cpp
		clang++ $(FLAGS) $(HEADER) -c $< -o $@

clean:
		@/bin/rm -f $(OFILE)
		@echo Cleaned $(NAME) object files

fclean: clean
		@/bin/rm -f $(NAME)
		@echo Cleaned $(NAME)

re: fclean all

.PHONY: all clean flcean re
