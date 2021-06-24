/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 13:36:02 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/24 20:47:22 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int     main(void)
{
    // TEST0 NOT SIGNED FORM EXCEPTION
    try
    {
        Bureaucrat  bc("TEST0", 5);
        Form form("Test0", 45, 1);
        form.execute(bc);
    }
    catch (std::exception & e)
    {
        std::cout << "TEST0: " << e.what() << std::endl;
    }
    // TEST1 
    try
    {
        Bureaucrat  bc("TEST1", 5);
        Form form("Test1", 45, 1);
        bc.signForm(form);
        form.execute(bc);
    }
    catch(const std::exception& e)
    {
        std::cerr << "TEST1: " << e.what() << '\n';
    }
    // TEST2
    try
    {
        Bureaucrat bc("TEST2", 45);
        Form form("Test2", 54, 46);
        bc.signForm(form);
        bc.executeForm(form);
    }
    catch (const std::exception & exception)
    {
        std::cout << "TEST2 " << exception.what(); 
    }
    // childs
    // child0 tests
    {
        Bureaucrat bc("child00", 146);
        ShrubberyCreationForm form("formchild_00");
        bc.signForm(form);
        bc.executeForm(form);
    }
    {
        Bureaucrat bc("child01", 140);
        ShrubberyCreationForm form("formchild_01");
        bc.signForm(form);
        bc.executeForm(form);
    }
    {
        Bureaucrat bc("child02", 137);
        ShrubberyCreationForm form("formchild_02");
        bc.signForm(form);
        bc.executeForm(form);
    }
    //child1 tests
    {
        Bureaucrat bc("child10", 146);
        PresidentialPardonForm form("formchild_10");
        bc.signForm(form);
        bc.executeForm(form);
    }
    {
        Bureaucrat bc("child11", 20);
        PresidentialPardonForm form("formchild_11");
        bc.signForm(form);
        bc.executeForm(form);
    }
    {
        Bureaucrat bc("child12", 5);
        PresidentialPardonForm form("formchild_12");
        bc.signForm(form);
        bc.executeForm(form);
    }
    //child2 tests
    {
        Bureaucrat bc("child20", 146);
        RobotomyRequestForm form("formchild_20");
        bc.signForm(form);
        bc.executeForm(form);
    }
    {
        Bureaucrat bc("child21", 72);
        RobotomyRequestForm form("formchild_21");
        bc.signForm(form);
        bc.executeForm(form);
    }
    {
        Bureaucrat bc("child22", 5);
        RobotomyRequestForm form("formchild_22");
        bc.signForm(form);
        bc.executeForm(form);
    }
    return (0);
}

