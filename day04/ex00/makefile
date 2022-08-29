NAME = Animal
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = Animal.hpp Dog.hpp Cat.hpp WrongCar.hpp WrongAnimal.hpp

	  
SRC = main.cpp\
	  Animal.cpp\
	  Dog.cpp\
	  Cat.cpp\
	  WrongAnimal.cpp\
	  WrongCat.cpp


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
