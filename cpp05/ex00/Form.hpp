/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:12:05 by ghwa              #+#    #+#             */
/*   Updated: 2024/11/06 15:46:13 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>

class Form {
	protected:
		const std::string _name;
		const int _executeGrade;
		const int _signGrade;
		bool _ifSigned;
		void checkGrade(int grade1, int grade2);
	public:
		Form();
		Form::Form(const std::string name, const int signgrade, const int executegrade)
		Form(const Form &other);
		~Form();

		const std::string getName() const;
		const int getSignGrade() const;
		const int getExecuteGrade() const;
		bool getIfSigned();
		void signForm();

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();};
		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();};
} ;

std::ostream& operator<<(std::ostream& out, const Form& Form);

#endif