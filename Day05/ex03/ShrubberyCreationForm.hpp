#pragma once

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
	void action() const;
	~ShrubberyCreationForm();
};
