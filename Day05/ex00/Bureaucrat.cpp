/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:05:44 by nerraou           #+#    #+#             */
/*   Updated: 2022/09/05 18:53:54 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    else if (grade > 150)
        throw(Bureaucrat::GradeTooLowException());
    else
    {
        this->grade = grade;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    *this = other;
}

void Bureaucrat::incrementGrade()
{
    if (this->grade - 1 < 1)
        throw(Bureaucrat::GradeTooHighException());
    else
    {
        this->grade--;
    }
}

void Bureaucrat::decrementGrade()
{
    if (this->grade + 1 > 150)
        throw(Bureaucrat::GradeTooLowException());
    else
    {
        this->grade++;
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low.");
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
    this->grade = other.grade;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &in)
{
    out << "Bureaucrat, name " << in.getName() << "with the grade " << in.getGrade() << std::endl;
    return (out);
}

Bureaucrat::~Bureaucrat()
{
}
