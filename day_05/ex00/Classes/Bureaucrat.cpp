#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("\"unknown\""), _grade(150) {
}

Bureaucrat::Bureaucrat(std::string name, unsigned int & grade): _name(name), _grade(grade) {
	if (_grade > 150)
		throw GradeToHighException();
	else if (_grade == 0)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & bur) {
    *this = bur;
}

Bureaucrat &  Bureaucrat::operator=(Bureaucrat const & bur) {
	this->_grade = bur._grade;
	this->_name = bur._name;
	return *this;
}

Bureaucrat::~Bureaucrat() {
}

std::ostream &	operator<<(std::ostream &o, Bureaucrat const &bur) {
	o << bur.getName() << "'s grade is: " << bur.getGrade();
	return o;
}

std::string		Bureaucrat::getName() const{
	return _name;
}
void			Bureaucrat::setName(const char *name) {
	_name = name;
}

unsigned int	Bureaucrat::getGrade() const{
	return _grade;
}

void			Bureaucrat::setGrade(unsigned int grade){
	_grade = grade;
	if (_grade > 150)
		throw GradeToHighException();
	else if (_grade == 0)
		throw GradeTooLowException();
}

void			Bureaucrat::incrementGrade() {
	++_grade;
	if (_grade > 150)
		throw GradeToHighException();
}

void			Bureaucrat::decrementGrade() {
	--_grade;
	if (_grade == 0)
		throw GradeTooLowException();
}

const char*	Bureaucrat::GradeToHighException::what() const throw(){
    return "Current grade too HIGH";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return "Current grade too LOW";
}