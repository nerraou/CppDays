NAME = base
CPPFLAGS =  -Wextra -Werror -std=c++98
HEADERS =  Base.hpp A.hpp B.hpp C.hpp

	  
SRC = main.cpp\
	 Base.cpp\
	 A.cpp\
	 B.cpp\
	 C.cpp

		  


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
