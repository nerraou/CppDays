#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequest", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other)
{
	*this = other;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("ShrubberyCreation", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	(void)other;
	return (*this);
}

void RobotomyRequestForm::action() const
{
	std::cout << "ZZzzzzzz....zzzzzzSsszzzzzz" << std::endl;
	if (rand() % 2 == 0)
	{
		std::cout << this->target << " has been robotomized successfully 50% of the time." << std::endl;
	}
	else
		std::cout << "the robotomy failed " << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
