/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:05:47 by nerraou           #+#    #+#             */
/*   Updated: 2022/09/04 17:40:31 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

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
    Bureaucrat &operator=(Bureaucrat const &other);
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