#pragma once

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	/* data */
public:
	Intern();
	Intern(const Intern &other);
	Intern &operator=(Intern const &other);
	Form *makeForm(std::string const &formName, std::string const &target);
	class InvalidFormName : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	~Intern();

private:
	Form *newPresidentialPardonForm(std::string target);
	Form *newRobotomyRequestForm(std::string target);
	Form *newShrubberyCreationForm(std::string target);
};
