#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat john("John Doe", 2);
        Form form1("Form 1", 3, 10);
        Form form2("Form 2", 1, 5);

        std::cout << john << std::endl;
        std::cout << form1 << std::endl;
        std::cout << form2 << std::endl;

        john.signForm(form1);
        john.signForm(form2);

        std::cout << form1 << std::endl;
        std::cout << form2 << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
