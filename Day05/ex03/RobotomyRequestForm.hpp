#pragma once

#include <iostream>
#include "Form.hpp"
#include <cstdlib>
class RobotomyRequestForm : public Form
{
private:
	std::string target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(const RobotomyRequestForm &other);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
	void action() const;
	~RobotomyRequestForm();
};
