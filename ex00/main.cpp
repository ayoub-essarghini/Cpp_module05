#include "includes/Bureaucrat.hpp"


int main() {
    try {
        Bureaucrat john("John Doe", 2);
        std::cout << john << std::endl;

        john.incrementGrade();
        std::cout << "After increment: " << john << std::endl;

        john.decrementGrade();
        std::cout << "After decrement: " << john << std::endl;

        Bureaucrat tooHigh("High Ranker", 0);

    } catch (const Bureaucrat::GradeTooHighException& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    } catch (const Bureaucrat::GradeTooLowException& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "General exception caught: " << e.what() << std::endl;
    }

    try {
        Bureaucrat jane("Jane Smith", 150);
        jane.decrementGrade();
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
