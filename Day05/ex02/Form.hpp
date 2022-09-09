#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	const std::string name;
	bool sign;
	const int gradeExecute;
	const int gradeSign;

public:
	Form();

	Form(const std::string name, const int gradeSign, const int gradeExecute);
	Form(const Form &other);
	Form &operator=(Form const &other);
	std::string getName() const;
	int getGradeSign() const;
	int getGradeExecute() const;
	bool getSign() const;
	void setSign(bool value);
	void beSigned(const Bureaucrat &br);
	void execute(Bureaucrat const &executor) const;
	virtual void action() const = 0;
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class CannotExecuteException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	virtual ~Form();
};

std::ostream &operator<<(std::ostream &out, Form const &in);
