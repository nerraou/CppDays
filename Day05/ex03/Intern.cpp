
#include "Intern.hpp"

Intern::Intern(/* args */)
{
}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern &Intern::operator=(Intern const &other)
{
	(void)other;
	return (*this);
}
Form *Intern::makeForm(std::string const &formName, std::string const &target)
{
	Form *(Intern::*intern[3])(std::string) = {&Intern::newPresidentialPardonForm, &Intern::newRobotomyRequestForm, &Intern::newShrubberyCreationForm};
	std::string str[3] = {"presidential pardon",
						  "robotomy request",
						  "shrubbery creation"};

	for (int i = 0; i < 3; i++)
	{
		if (formName == str[i])
			return (this->*(intern[i]))(target);
	}
	throw(Intern::InvalidFormName());
}

Form *Intern::newPresidentialPardonForm(std::string target)
{
	std::cout << "Intern create presidential pardon form" << std::endl;
	return new PresidentialPardonForm(target);
}

Form *Intern::newRobotomyRequestForm(std::string target)
{
	std::cout << "Intern create robotomy request form" << std::endl;

	return new RobotomyRequestForm(target);
}
Form *Intern::newShrubberyCreationForm(std::string target)
{
	std::cout << "Intern create shrubbery creation form" << std::endl;
	return new ShrubberyCreationForm(target);
}

const char *Intern::InvalidFormName::what() const throw()
{
	return ("Invalid form name.");
}

Intern::~Intern()
{
}