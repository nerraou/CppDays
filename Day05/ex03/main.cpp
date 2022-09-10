/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhayla <nouhayla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:05:42 by nerraou           #+#    #+#             */
/*   Updated: 2022/09/10 17:55:46 by nouhayla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"
int main()
{

	try
	{
		Bureaucrat br("BureaucratNoha", 4);
		Intern someRandomIntern;
		Form *rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << rrf->getGradeExecute();
	}
	catch (std::exception &e)
	{
		std::cerr << (e.what()) << std::endl;
	}

	return 0;
}