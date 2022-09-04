/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:05:42 by nerraou           #+#    #+#             */
/*   Updated: 2022/09/04 17:43:37 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat br("test", 140);
        br.decrementGrade();
        br.incrementGrade();
        std::cout << br;
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << (e.what()) << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << (e.what()) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << (e.what()) << std::endl;
    }

    return 0;
}