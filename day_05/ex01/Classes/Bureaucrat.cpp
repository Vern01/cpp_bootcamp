#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("\"unknown\""), _grade(150) {
}

Bureaucrat::Bureaucrat(std::string name, unsigned int & grade): _name(name), _grade(grade) {
	if (_grade > 150)
		throw GradeTooLowException();
	else if (_grade == 0)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & bur) : _name(bur._name), _grade(bur._grade){
}

Bureaucrat &  Bureaucrat::operator=(Bureaucrat const & bur){
	this->_grade = bur._grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {
}

std::ostream &	operator<<(std::ostream &o, Bureaucrat const &bur) {
	o << bur.getName() << "'s grade is: " << bur.getGrade();
	return o;
}

std::string		Bureaucrat::getName() const{
	return this->_name;
}

unsigned int	Bureaucrat::getGrade() const{
	return _grade;
}

void			Bureaucrat::setGrade(unsigned int grade){
	_grade = grade;
	if (_grade > 150)
		throw GradeTooLowException();
	else if (_grade == 0)
		throw GradeTooHighException();
}

void			Bureaucrat::incrementGrade() {
	--_grade;
	if (_grade == 0)
		throw GradeTooLowException();
}

void			Bureaucrat::decrementGrade() {
	++_grade;
	if (_grade > 150)
		throw GradeTooHighException();
}

const char*	Bureaucrat::GradeTooHighException::what() const throw(){
    return "Current grade too HIGH";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return "Current grade too LOW";
}