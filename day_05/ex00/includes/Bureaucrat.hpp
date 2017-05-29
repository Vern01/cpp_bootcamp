#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>

class Bureaucrat {
	public:
        Bureaucrat();
		Bureaucrat(std::string name, unsigned int & grade);
        Bureaucrat(Bureaucrat const & bur);
        Bureaucrat& operator=(Bureaucrat const & bur);
        ~Bureaucrat();

	std::string		getName() const;
	unsigned int	getGrade() const;
	void			setGrade(unsigned int grade);
	void			incrementGrade();
	void			decrementGrade();

    class GradeTooHighException : public std::exception{
        public:
            virtual const char* what() const throw();
    };

	class GradeTooLowException: public std::exception {
		public:
			virtual const char *what() const throw();
	};



	private:
		const std::string	_name;
		unsigned int		_grade;
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & bur);

#endif // BUREAUCRAT_HPP
