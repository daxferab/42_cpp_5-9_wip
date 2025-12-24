#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>

class Bureaucrat;

class AForm
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_signGrade;
		int const			_exeGrade;

	public:
		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};
		AForm();
		AForm(std::string name, int sign, int exe);
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);

		std::string	getName() const;
		bool		getSigned() const;
		int			getSignGrade() const;
		int			getExeGrade() const;

		void		beSigned(Bureaucrat *bureaucrat);

		virtual ~AForm();
};

std::ostream	&operator<<(std::ostream& so, AForm& f);

#endif
