#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardon", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other)
{
	*this = other;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("PresidentialPardon", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	(void)other;
	return (*this);
}

void PresidentialPardonForm::action() const
{
	std::cout << this->target << "has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
