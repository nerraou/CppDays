NAME = phonebook
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = PhoneBook.h  Contact.h Libft.h
	  
SRC = main.cpp\
	  CheckInput.cpp\
	  PhoneBook.cpp


OBJ = $(SRC:.cpp=.o)

INCLUDES_PATH = -I ./

all:  $(NAME)

%.o: %.cpp $(HEADERS)
	g++ $(CPPFLAGS) $(INCLUDES_PATH) -o $@ -c $<

$(NAME): $(OBJ)
	g++  -o $(NAME) $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
