NAME = Convert
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = Convert.hpp

	  
SRC = main.cpp\
	 Convert.cpp
	


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
