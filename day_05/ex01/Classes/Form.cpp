Form::Form() : _name("\"unknown\""), _grade(150) {
}

Form::Form(std::string name, unsigned int & grade): _name(name), _grade(grade) {
	if (_grade > 150)
		throw GradeTooLowException();
	else if (_grade == 0)
		throw GradeTooHighException();
}

Form::Form(Form const & bur) : _name(bur._name), _grade(bur._grade){
}

Form &  Form::operator=(Form const & bur){
	this->_grade = bur._grade;
	return *this;
}

Form::~Form() {
}

std::ostream &	operator<<(std::ostream &o, Form const &bur) {
	o << bur.getName() << "'s grade is: " << bur.getGrade();
	return o;
}