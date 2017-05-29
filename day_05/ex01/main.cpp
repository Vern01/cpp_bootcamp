#include "includes/Bureaucrat.hpp"
#include "Classes/Bureaucrat.cpp"

int main() {
    try {
		unsigned int value = 147;
        Bureaucrat b("Bob", value);
		b.incrementGrade();
		std::cout << b << std::endl;
		b.setGrade(148);
		std::cout << b << std::endl;
		b.decrementGrade();
		std::cout << b << std::endl;

		std::cout << b.getName() << std::endl;

		Bureaucrat c(b);

		std::cout << c.getName() << std::endl;
		std::cout << c.getGrade() << std::endl;

		c.setGrade(151);

    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}
