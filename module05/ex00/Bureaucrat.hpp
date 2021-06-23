/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 12:27:53 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/23 13:41:10 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
    const std::string   name;
    int                 grade;
    Bureaucrat();
    public:
        class GradeTooHighException : public std::exception
        {
            public:
                char      *what(void) const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                char        *what(void) const throw();
        };
        Bureaucrat(const std::string & name, int grade);
        Bureaucrat(const Bureaucrat & bureaucrat);
        Bureaucrat & operator = (const Bureaucrat & bureaucrat);
        ~Bureaucrat(void);
        int             getGrade(void) const;
        const std::string &getName(void) const;
        void                increment_grade(void) throw(Bureaucrat::GradeTooHighException);
        void                decrement_grade(void) throw(Bureaucrat::GradeTooLowException);
};


std::ostream & operator << (std::ostream & os, const Bureaucrat & bc);
#endif 