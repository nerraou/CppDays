#pragma once

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(const PresidentialPardonForm &other);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &other);
	void action() const;
	~PresidentialPardonForm();
};
