#include "include/Bureaucrat.hpp"
#include "include/AForm.hpp"
#include "include/ShrubberyCreationForm.hpp"
#include "include/RobotomyRequestForm.hpp"
#include "include/PresidentialPardonForm.hpp"

int main(void)
{
	ShrubberyCreationForm	shrub("home");
	RobotomyRequestForm		robo("home");
	PresidentialPardonForm	presi("home");
	std::cout << "Created " << presi.getName() << " with ";
	std::cout << presi.getSignGrade() << " sign grade and ";
	std::cout << presi.getExeGrade() << " exec grade." << std::endl;
	std::cout << "Created " << robo.getName() << " with ";
	std::cout << robo.getSignGrade() << " sign grade and ";
	std::cout << robo.getExeGrade() << " exec grade." << std::endl;
	std::cout << "Created " << shrub.getName() << " with ";
	std::cout << shrub.getSignGrade() << " sign grade and ";
	std::cout << shrub.getExeGrade() << " exec grade." << std::endl;
}
