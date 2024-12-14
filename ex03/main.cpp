#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main() {
    try {
        Intern someRandomIntern;
        AForm* form;

        form = someRandomIntern.makeForm("robotomy request", "Bender");
        if (form) {
            std::cout << *form << std::endl;
            delete form;
        }

        form = someRandomIntern.makeForm("shrubbery creation", "");
        if (form) {
            std::cout << *form << std::endl;
            delete form;
        }

        form = someRandomIntern.makeForm("invalid form", "nowhere");
        if (form) {
            delete form;
        }
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
