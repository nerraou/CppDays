NAME = brain
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

	  
SRC = main.cpp

OBJ = $(SRC:.cpp=.o)


all:  $(NAME)

%.o: %.cpp 
	c++ $(CPPFLAGS) $(INCLUDES_PATH) -o $@ -c $<

$(NAME): $(OBJ)
	c++  -o $(NAME) $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
