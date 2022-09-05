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
    void beSigned(const Bureaucrat &br);
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
    ~Form();
};

std::ostream &operator<<(std::ostream &out, Form const &in);
