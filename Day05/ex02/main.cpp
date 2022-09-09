/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:05:42 by nerraou           #+#    #+#             */
/*   Updated: 2022/09/09 18:42:24 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include <time.h>
int main()
{
	srand(time(0));
	try
	{
		Bureaucrat br("BureaucratNoha", 4);
		ShrubberyCreationForm form1("home");
		RobotomyRequestForm form2("Noha");
		PresidentialPardonForm form;
		br.signForm(form);
		br.executeForm(form);
		br.signForm(form1);
		br.executeForm(form1);
		br.signForm(form2);
		br.executeForm(form2);
	}
	catch (std::exception &e)
	{
		std::cerr << (e.what()) << std::endl;
	}

	return 0;
}