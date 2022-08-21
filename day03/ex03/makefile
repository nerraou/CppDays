NAME = DiamondTrap
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = ClapTrap.hpp FragTrap.hpp ScavTrap.hpp DiamondTrap.hpp
	  
SRC = main.cpp\
	  ClapTrap.cpp\
	  FragTrap.cpp\
	  ScavTrap.cpp\
	  DiamondTrap.cpp


OBJ = $(SRC:.cpp=.o)

INCLUDES_PATH = -I ./

all:  $(NAME)

%.o: %.cpp $(HEADERS)
	c++ $(CPPFLAGS) $(INCLUDES_PATH) -o $@ -c $<

$(NAME): $(OBJ)
	c++  -o $(NAME) $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
