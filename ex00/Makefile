NAME = megaphone
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

	  
SRC =  megaphone.cpp


OBJ = $(SRC:.cpp=.o)


all:  $(NAME)

megaphone.o: megaphone.cpp
	g++ $(CPPFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	g++  -o $(NAME) $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
