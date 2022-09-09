/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:00:45 by nerraou           #+#    #+#             */
/*   Updated: 2022/09/09 14:21:17 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name(""), gradeExecute(0), gradeSign(0)
{
}

Form::Form(const std::string name, const int gradeSign, const int gradeExecute) : name(name), sign(false), gradeExecute(gradeExecute), gradeSign(gradeSign)
{
	if (gradeSign < 1 || gradeExecute < 1)
		throw(Form::GradeTooHighException());
	else if (gradeExecute > 150 || gradeSign > 150)
		throw(Form::GradeTooLowException());
}

Form::Form(const Form &other) : name(""), gradeExecute(0), gradeSign(0)
{
	*this = other;
}

Form &Form::operator=(Form const &other)
{
	this->sign = other.sign;
	return (*this);
}
int Form::getGradeExecute() const
{
	return (this->gradeExecute);
}
int Form::getGradeSign() const
{
	return (this->gradeSign);
}

std::string Form::getName() const
{
	return (this->name);
}

bool Form::getSign() const
{
	return (this->sign);
}

void Form::beSigned(const Bureaucrat &br)
{
	if (br.getGrade() <= this->getGradeSign())
	{
		this->sign = true;
	}
	else
	{
		this->sign = false;
		throw(Form::GradeTooLowException());
	}
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

std::ostream &operator<<(std::ostream &out, Form const &in)
{
	out << "Form, name: " << in.getName() << std::endl;
	out << "Grade execute: " << in.getGradeExecute() << std::endl;
	out << "Grade sign: " << in.getGradeSign() << std::endl;
	out << "is signed: " << in.getSign() << std::endl;
	return (out);
}
Form::~Form()
{
}