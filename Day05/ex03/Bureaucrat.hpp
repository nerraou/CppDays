/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:05:47 by nerraou           #+#    #+#             */
/*   Updated: 2022/09/09 16:27:42 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
private:
	std::string const name;
	int grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void executeForm(Form const &form);
	Bureaucrat &operator=(Bureaucrat const &other);
	void signForm(Form &form);
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
	~Bureaucrat();
};
std::ostream &operator<<(std::ostream &out, Bureaucrat const &in);