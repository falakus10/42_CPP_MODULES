NAME = Interface

SRCS = main.cpp sources/AMateria.cpp sources/Character.cpp sources/Cure.cpp sources/Ice.cpp sources/ICharacter.cpp sources/IMateriaSource.cpp sources/MateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

RM = rm -f

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re