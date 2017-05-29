#ifndef FORM_HPP
# define FORM_HPP

class Form {
public:
	Form();
	Form(std::string name, unsigned int & grade);
	Form(Bureaucrat const & bur);
	Form& operator=(Form const & bur);
	~Form();

	void				getName();
	void				getSignGrade();
	void				getExeGrade();
	void				getSigned();
	void				beSigned(Bureaucrat const & bureaucrat);

	class	GradeTooHighException {
	public:
		virtual const char* what() const throw();
	};

	class	GradeTooLowException {
	public:
		virtual const char* what() const throw();
	};
private:
	const std::string	_name;
	bool				_signed;
	const unsigned int	_signGrade;
	const unsigned int	_exeGrade;
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & bur);

#endif