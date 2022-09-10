NAME = Form
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp Inter.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp

	  
SRC = main.cpp\
	  Bureaucrat.cpp\
	  Form.cpp\
	  ShrubberyCreationForm.cpp\
	  PresidentialPardonForm.cpp\
	  RobotomyRequestForm.cpp\
	  Intern.cpp

	


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
